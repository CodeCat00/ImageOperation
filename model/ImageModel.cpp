//
// Created by ASUS on 2023/10/4.
//

#include <QFile>
#include <QtWidgets/QtWidgets>
#include <opencv2/core/mat.hpp>
#include "ImageModel.h"
#include "../control/util/ImageFormatConverter.h"

void ImageModel::readImage(QString fileName) {

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        return;
    }

    int nSize = file.size();
    char *m_pBuff = new char[nSize + 1];

    QDataStream in(&file);
    int m_nBuffSize = in.readRawData(m_pBuff, nSize);

    if (m_nBuffSize == -1) {
        return;
    }

    inImage.loadFromData(reinterpret_cast<unsigned char *>(m_pBuff), m_nBuffSize);
    if (inImage.width() < 1024) {
        showImage = inImage;
        return;
    }

    cv::Mat inImageMat = ImageFormatConverter::QImageToMat(inImage);
    cv::Mat resizeImage;

    double scale = 1024. / inImage.width();
    int width = inImage.width() * scale;
    int height = inImage.height() * scale;
    resize(inImageMat, resizeImage, cv::Size(width, height));

    showImage = ImageFormatConverter::MatToQImage(resizeImage);
}

QPixmap ImageModel::getShowImage() const {
    return QPixmap::fromImage(showImage);
}

QImage ImageModel::getSaveImage() const {
    return inImage;
}