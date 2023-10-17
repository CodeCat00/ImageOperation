//
// Created by ASUS on 2023/10/4.
//

#include <QFile>
#include <QtWidgets/QtWidgets>
#include <opencv2/core/mat.hpp>
#include "ImageModel.h"
#include "../control/util/ImageFormatConverter.h"
#include "../control/image/ImageProcess.h"

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
    showInImage = inImage;

    ImageProcess::changeImageSize(&inImage, &showInImage, 128, 1024, 1.0);

}

QPixmap ImageModel::getShowInImage() const {
    return QPixmap::fromImage(showInImage);
}

QPixmap ImageModel::getShowResultImage() {
    if (showResultImage.isNull()) {
        showResultImage = resultImage;
    }

    return QPixmap::fromImage(showResultImage);
}

void ImageModel::setResultImage(QImage image) {
    resultImage = image;
    showResultImage = image;

    ImageProcess::changeImageSize(&resultImage, &showResultImage, 128, 1024, 1.0);
}
