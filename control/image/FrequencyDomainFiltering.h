//
// Created by ASUS on 2023/10/15.
//

#ifndef IMAGEOPERATION_FREQUENCYDOMAINFILTERING_H
#define IMAGEOPERATION_FREQUENCYDOMAINFILTERING_H


#include "../../model/ImageModel.h"

class FrequencyDomainFiltering {

public:
    static void GaussianBlur(ImageModel *imageModel);

    static void medianBlur(ImageModel *imageModel);

    static void sobel(ImageModel *imageModel);

    static void laplacian(ImageModel *imageModel);

};


#endif //IMAGEOPERATION_FREQUENCYDOMAINFILTERING_H
