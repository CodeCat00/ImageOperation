//
// Created by ASUS on 2023/10/6.
//

#include "ImageProcess.h"
#include "../util/ImageFormatConverter.h"

#include <opencv2/core/mat.hpp>

void ImageProcess::getBiggerImage(QImage *srcImage, QImage *changeImage) {
    changeImageSize(srcImage, changeImage, 1.1);
}

void ImageProcess::getSmallerShowImage(QImage *srcImage, QImage *changeImage) {
    changeImageSize(srcImage, changeImage, 0.9);
}

void ImageProcess::changeImageSize(QImage *srcImage, QImage *changeImage, double scale) {

    int width = (*changeImage).width() * scale;
    int height = (*changeImage).height() * scale;
    double multi = (double) height / width;

    width = width <= 256 ? 256 : width;
    width = width >= 4096 ? 4096 : width;

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(*srcImage);
    cv::Mat resizeMat;

    resize(srcMat, resizeMat, cv::Size(width, (int) (width * multi)));

    *changeImage = ImageFormatConverter::MatToQImage(resizeMat);

}