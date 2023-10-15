//
// Created by ASUS on 2023/10/15.
//

#ifndef IMAGEOPERATION_IMAGESEGMENTATION_H
#define IMAGEOPERATION_IMAGESEGMENTATION_H


#include "../../model/ImageModel.h"

class ImageSegmentation {

public:
    static void outlierDetection(ImageModel *imageModel);
};


#endif //IMAGEOPERATION_IMAGESEGMENTATION_H
