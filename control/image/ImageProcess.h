//
// Created by ASUS on 2023/10/6.
//

#ifndef IMAGEOPERATION_IMAGEPROCESS_H
#define IMAGEOPERATION_IMAGEPROCESS_H

#include <QImage>
#include "../../model/ImageModel.h"

class ImageProcess {

public:
    static void getBiggerImage(QImage *srcImage, QImage *changeImage);

    static void getSmallerShowImage(QImage *srcImage, QImage *changeImage);

    static void changeImageSize(QImage *srcImage, QImage *changeImage, int minWidth, int maxWidth, double scale);

};


#endif //IMAGEOPERATION_IMAGEPROCESS_H
