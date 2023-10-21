//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include "Morphology.h"
#include "../../util/ImageFormatConverter.h"
#include "../../util/ImageOtherUtil.h"

void Morphology::binaryImage(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    cv::cvtColor(srcMat, resultMat, cv::COLOR_BGR2GRAY);
    threshold(resultMat, resultMat, 0, 255, cv::THRESH_BINARY_INV | cv::THRESH_OTSU);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void Morphology::corrosion(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    int size = ImageOtherUtil::computeSize(srcMat.rows,srcMat.cols,3);
    cv::Mat structureElement = getStructuringElement(cv::MORPH_RECT, cv::Size(size, size), cv::Point(-1, -1));
    erode(srcMat, resultMat, structureElement, cv::Point(-1, -1), 1);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void Morphology::expansion(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    int size = ImageOtherUtil::computeSize(srcMat.rows,srcMat.cols,3);
    cv::Mat structureElement = getStructuringElement(cv::MORPH_RECT, cv::Size(size, size), cv::Point(-1, -1));
    dilate(srcMat, resultMat, structureElement, cv::Point(-1, -1), 1);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void Morphology::openOperation(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat grayMat;
    cv::Mat binaryMat;
    cv::Mat resultMat;

    cv::cvtColor(srcMat, grayMat, cv::COLOR_BGR2GRAY);
    threshold(grayMat, binaryMat, 0, 255, cv::THRESH_BINARY_INV | cv::THRESH_OTSU);

    int size = ImageOtherUtil::computeSize(binaryMat.rows,binaryMat.cols,5);
    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(size, size), cv::Point(-1, -1));
    morphologyEx(binaryMat, resultMat, cv::MORPH_OPEN, kernel, cv::Point(-1, -1), 1, 0);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void Morphology::closedOperation(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat grayMat;
    cv::Mat binaryMat;
    cv::Mat resultMat;

    cv::cvtColor(srcMat, grayMat, cv::COLOR_BGR2GRAY);
    threshold(grayMat, binaryMat, 0, 255, cv::THRESH_BINARY_INV | cv::THRESH_OTSU);

    int size = ImageOtherUtil::computeSize(srcMat.rows,srcMat.cols,5);
    cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(size, size), cv::Point(-1, -1));
    morphologyEx(binaryMat, resultMat, cv::MORPH_CLOSE, kernel, cv::Point(-1, -1), 1, 0);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void Morphology::boundaryExtraction(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat resultMat;

    int size = ImageOtherUtil::computeSize(srcMat.rows,srcMat.cols,3);
    Canny(srcMat, resultMat, size, size*2, 3);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void Morphology::holeFilling(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat grayMat;
    cv::Mat resultMat;

    cv::cvtColor(srcMat, grayMat, cv::COLOR_BGR2GRAY);
    threshold(grayMat, resultMat, 0, 255, cv::THRESH_BINARY_INV | cv::THRESH_OTSU);
    floodFill(resultMat, cv::Point(0, 0), cv::Scalar(255));

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}
