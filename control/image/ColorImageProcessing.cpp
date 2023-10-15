//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include "ColorImageProcessing.h"
#include "../util/ImageFormatConverter.h"

void ColorImageProcessing::grayscaleProcessing(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    cv::cvtColor(srcMat, resultMat, cv::COLOR_BGR2GRAY);

    imageModel->resultImage = ImageFormatConverter::MatToQImage(resultMat);

}
