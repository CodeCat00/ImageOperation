//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include <iostream>
#include "ImageSegmentation.h"
#include "../../util/ImageFormatConverter.h"
#include "../../util/ImageOtherUtil.h"

void ImageSegmentation::outlierDetection(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat = srcMat.clone();

    // 拉普拉斯卷积核
    cv::Mat Laplacian_kernel = (cv::Mat_<float>(3, 3) << 0, 1, 0, 1, -4, 1, 0, 1, 0);

    // 卷积
    filter2D(srcMat, resultMat, -1, Laplacian_kernel);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void ImageSegmentation::edgeDetection(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat = srcMat.clone();

    int size = ImageOtherUtil::computeSize(srcMat.rows,srcMat.cols,1);
    blur(srcMat, srcMat, cv::Size(size, size));
    Canny(srcMat, resultMat, 50, 150);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void ImageSegmentation::adaptiveThreshold(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat = srcMat.clone();

    cvtColor(srcMat, srcMat, cv::COLOR_BGR2GRAY);
    threshold(srcMat, resultMat, 0, 255, cv::THRESH_OTSU);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void ImageSegmentation::watershed(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    //二值化
    cv::Mat grayImg, binaryImg;
    cvtColor(srcMat, grayImg, cv::COLOR_BGR2GRAY);
    threshold(grayImg, binaryImg, 0, 255, cv::THRESH_BINARY | cv::THRESH_OTSU);

    //形态学和距离变换
    int size = ImageOtherUtil::computeSize(srcMat.rows,srcMat.cols,1);
    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(size, size), cv::Point(-1, -1));
    morphologyEx(binaryImg, binaryImg, cv::MORPH_OPEN, kernel, cv::Point(-1, -1));

    cv::Mat distImg;
    distanceTransform(binaryImg, distImg, cv::DistanceTypes::DIST_L2, 3, CV_32F);
    normalize(distImg, distImg, 0.0, 1.0, cv::NORM_MINMAX);

    //开始生成标记
    threshold(distImg, distImg, 0.1, 1.0, cv::THRESH_BINARY);
    normalize(distImg, distImg, 0, 255, cv::NORM_MINMAX);
    distImg.convertTo(distImg, CV_8UC1);  //CV_32F 转成 CV_8UC1

    //标记开始
    std::vector<std::vector<cv::Point>> contours;
    std::vector<cv::Vec4i> hireachy;
    findContours(distImg, contours, hireachy, cv::RETR_CCOMP, cv::CHAIN_APPROX_SIMPLE);
    if (contours.empty())
    {
        std::cout << "just one pace" << std::endl;
        imageModel->setResultImage(ImageFormatConverter::MatToQImage(srcMat));
        return;
    }

    cv::Mat markersImg(distImg.size(), CV_32S);
    markersImg = cv::Scalar::all(0);
    for (int i = 0; i < contours.size(); i++)
    {
        drawContours(markersImg, contours, i, cv::Scalar(i + 1), -1, 8, hireachy, INT_MAX);
    }
    circle(markersImg, cv::Point(5, 5) ,3,cv::Scalar(255), -1);

    //分水岭变换
    cv::watershed(srcMat, markersImg);

    //生成随机颜色
    std::vector<cv::Vec3b>colors;
    int numSegments = contours.size();
    for (int i = 0; i < numSegments; i++)
    {
        int r = cv::theRNG().uniform(0, 255);
        int g = cv::theRNG().uniform(0, 255);
        int b = cv::theRNG().uniform(0, 255);
        colors.push_back(cv::Vec3b((uchar)b, (uchar)g, (uchar)r));
    }

    //颜色填充和最终显示
    cv::Mat dstImg = cv::Mat::zeros(markersImg.size(), CV_8UC3);
    int index = 0;
    for (int i = 0; i < markersImg.rows; i++)
    {
        for (int j = 0; j < markersImg.cols; j++)
        {
            index = markersImg.at<int>(i, j);
            if (index > 0 && index <= numSegments)
            {
                dstImg.at<cv::Vec3b>(i, j) = colors[index - 1];
            }
            else
            {
                dstImg.at<cv::Vec3b>(i, j) = cv::Vec3b(255, 255, 255);
            }
        }
    }

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(dstImg));

}
