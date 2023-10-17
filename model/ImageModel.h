//
// Created by ASUS on 2023/10/4.
//

#ifndef FETCHTEXTURE_IMAGEMODEL_H
#define FETCHTEXTURE_IMAGEMODEL_H


#include <QImage>

class ImageModel {

public:
    void readImage(QString fileName);

    void setResultImage(QImage image);

    QPixmap getShowInImage() const;
    QPixmap getShowResultImage();

public:
    QImage inImage;
    QImage showInImage;
    QImage resultImage;
    QImage showResultImage;
    QImage saveImage;

};


#endif //FETCHTEXTURE_IMAGEMODEL_H
