//
// Created by ASUS on 2023/10/4.
//

#ifndef FETCHTEXTURE_IMAGEMODEL_H
#define FETCHTEXTURE_IMAGEMODEL_H


#include <QImage>

class ImageModel {

public:
    void readImage(QString fileName);
    QPixmap getShowImage() const;
    QImage getSaveImage() const;

public:
    QImage inImage;
    QImage showImage;
    QImage unitTexture;

};


#endif //FETCHTEXTURE_IMAGEMODEL_H
