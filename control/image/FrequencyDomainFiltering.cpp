//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include "FrequencyDomainFiltering.h"
#include "../util/ImageFormatConverter.h"

void FrequencyDomainFiltering::gaussianBlur(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = srcMat.clone();

    cv::blur(srcMat,resultMat,cv::Size(5,5));

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void FrequencyDomainFiltering::medianBlur(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = srcMat.clone();

    cv::medianBlur(srcMat,resultMat,5);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void FrequencyDomainFiltering::sobel(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat sobelX;
    cv::Sobel(srcMat,sobelX,CV_8U,1,0,5,0.4,128);

    cv::Mat sobelY;
    cv::Sobel(srcMat,sobelY,CV_8U,0,1,5,0.4,128);

    cv::Mat resultMat = abs(sobelX)+abs(sobelY);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void FrequencyDomainFiltering::laplacian(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = srcMat.clone();

    cv::Laplacian(srcMat,resultMat,CV_8U,7,0.01,128);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void FrequencyDomainFiltering::meanFilter(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = srcMat.clone();

    cv::blur(srcMat, resultMat, cv::Size(7, 7));

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}