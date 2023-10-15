//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include "ImageSegmentation.h"
#include "../util/ImageFormatConverter.h"

void ImageSegmentation::outlierDetection(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    // 拉普拉斯卷积核
    cv::Mat Laplacian_kernel = (cv::Mat_<float>(3, 3) << 0, 1, 0, 1, -4, 1, 0, 1, 0);

    // 卷积
    filter2D(srcMat, resultMat, -1, Laplacian_kernel);

    imageModel->resultImage = ImageFormatConverter::MatToQImage(resultMat);
}
