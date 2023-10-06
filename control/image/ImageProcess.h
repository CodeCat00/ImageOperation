//
// Created by ASUS on 2023/10/6.
//

#ifndef IMAGEOPERATION_IMAGEPROCESS_H
#define IMAGEOPERATION_IMAGEPROCESS_H

#include <QImage>

class ImageProcess {

public:
    static void getBiggerImage(QImage *srcImage, QImage *changeImage);

    static void getSmallerShowImage(QImage *srcImage, QImage *changeImage);


private:
    static void changeImageSize(QImage *srcImage, QImage *changeImage,double scale);

};


#endif //IMAGEOPERATION_IMAGEPROCESS_H