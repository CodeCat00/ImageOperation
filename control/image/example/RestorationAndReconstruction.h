//
// Created by ASUS on 2023/10/15.
//

#ifndef IMAGEOPERATION_RESTORATIONANDRECONSTRUCTION_H
#define IMAGEOPERATION_RESTORATIONANDRECONSTRUCTION_H


#include "../../../model/ImageModel.h"

class RestorationAndReconstruction {

public:
    static void gaussianNoise(ImageModel *imageModel);
    static void saltAndPepperNoise(ImageModel *imageModel);

};


#endif //IMAGEOPERATION_RESTORATIONANDRECONSTRUCTION_H
