//
// Created by ASUS on 2023/10/15.
//

#include <iostream>
#include "GrayscaleTransformation.h"
#include "../util/ImageFormatConverter.h"
#include "../util/ImageMatDetailUtil.h"

void GrayscaleTransformation::imageInversion(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = 255 - srcMat;

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void GrayscaleTransformation::logarithmic(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = ImageMatDetailUtil::detail(&srcMat,[](double color){
        return 6 * log(color + 1);
    });

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void GrayscaleTransformation::gamma(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = ImageMatDetailUtil::detail(&srcMat,[](double color){
        return 6*pow(color,0.5);
    });

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void GrayscaleTransformation::histogramEqualization(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = ImageMatDetailUtil::detailMultiChannel(&srcMat,[](cv::Mat &src,cv::Mat &dst){
        cv::equalizeHist( src, dst );
    });

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void GrayscaleTransformation::smoothSpatialFilter(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat = srcMat.clone();

    // 获取图片的宽，高和像素信息，
    const int  num = 3 * 3;
    std::vector<uchar> pixel(num);
    // 相对于中心点，3*3领域中的点需要偏移的位置
    int delta[3 * 3][2] = {
            { -1, -1 },
            { -1, 0 },
            { -1, 1 },
            { 0, -1 },
            { 0, 0 },
            { 0, 1 },
            { 1, -1 },
            { 1, 0 },
            {1, 1}
    };
    // 中值滤波，没有考虑边缘
    for (int i = 1; i < srcMat.rows - 1; ++i)
    {
        for (int j = 1; j < srcMat.cols - 1; ++j)
        {
            //1.1 提取领域值 // 使用数组 这样处理 8邻域值 不适合更大窗口
            for (int k = 0; k < num; ++k)
            {
                pixel[k] = srcMat.at<uchar>(i+delta[k][0], j+ delta[k][1]);
            }
            //1.2 排序  // 使用自带的库及排序即可
            std::sort(pixel.begin(), pixel.end());
            //1.3 获取该中心点的值
            resultMat.at<uchar>(i, j) = pixel[num / 2];
        }
    }

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void GrayscaleTransformation::sharpeningSpatialFilter(ImageModel *imageModel) {
    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = ImageMatDetailUtil::detailMultiChannel(&srcMat,[](cv::Mat &src,cv::Mat &dst){
        cv::Mat result = src.clone();

        int la;
        for (int i = 1; i < (src.rows-1); i++)
        {
            for (int j = 1; j < (src.cols - 1); j++)
            {
                la = 4 * src.at<uchar>(i, j)
                        - src.at<uchar>(i + 1, j)
                                - src.at<uchar>(i - 1, j)
                                        - src.at<uchar>(i, j + 1)
                                                - src.at<uchar>(i, j - 1);

                result.at<uchar>(i, j) = cv::saturate_cast<uchar>(dst.at<uchar>(i, j) + la);
            }
        }

        dst = result;
    });

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));
}
