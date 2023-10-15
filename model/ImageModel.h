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
    QPixmap getResultImage() const;

public:
    QImage inImage;
    QImage showImage;
    QImage resultImage;
    QImage saveImage;

};


#endif //FETCHTEXTURE_IMAGEMODEL_H
