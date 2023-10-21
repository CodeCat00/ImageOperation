//
// Created by ASUS on 2023/10/15.
//

#ifndef IMAGEOPERATION_MORPHOLOGY_H
#define IMAGEOPERATION_MORPHOLOGY_H


#include "../../../model/ImageModel.h"

class Morphology {

public:
    static void binaryImage(ImageModel *imageModel);
    static void corrosion(ImageModel *imageModel);
    static void expansion(ImageModel *imageModel);
    static void openOperation(ImageModel *imageModel);
    static void closedOperation(ImageModel *imageModel);
    static void boundaryExtraction(ImageModel *imageModel);
    static void holeFilling(ImageModel *imageModel);

};


#endif //IMAGEOPERATION_MORPHOLOGY_H
