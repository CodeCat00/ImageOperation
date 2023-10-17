//
// Created by ASUS on 2023/10/6.
//

#include "ImageProcess.h"
#include "../util/ImageFormatConverter.h"

#include <opencv2/core/mat.hpp>

void ImageProcess::getBiggerImage(QImage *srcImage, QImage *changeImage) {
    changeImageSize(srcImage, changeImage, 256, 4096, 1.1);
}

void ImageProcess::getSmallerShowImage(QImage *srcImage, QImage *changeImage) {
    changeImageSize(srcImage, changeImage, 256, 4096, 0.9);
}

void ImageProcess::changeImageSize(QImage *srcImage, QImage *changeImage, int minWidth, int maxWidth, double scale) {

    int width = (*changeImage).width() * scale;
    int height = (*changeImage).height() * scale;
    double multi = (double) height / width;

    width = width <= minWidth ? minWidth : width;
    width = width >= maxWidth ? maxWidth : width;

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(*srcImage);

    resize(srcMat, srcMat, cv::Size(width, (int) (width * multi)));

    *changeImage = ImageFormatConverter::MatToQImage(srcMat);

}