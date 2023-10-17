//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include "Morphology.h"
#include "../util/ImageFormatConverter.h"

void Morphology::binaryImage(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    cv::cvtColor(srcMat, resultMat, cv::COLOR_BGR2GRAY);

    cv::threshold(srcMat, resultMat, 125, 255, cv::THRESH_BINARY_INV);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}
