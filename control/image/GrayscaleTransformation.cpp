//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include <iostream>
#include "GrayscaleTransformation.h"
#include "../util/ImageFormatConverter.h"

void GrayscaleTransformation::imageInversion(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    if(srcMat.type() != CV_8UC3){
        std::cout << "inImage type is not CV_8UC3" << std::endl;
        return;
    }

    cv::Mat resultMat = 255 - srcMat;

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}
