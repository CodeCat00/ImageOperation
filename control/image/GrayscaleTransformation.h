//
// Created by ASUS on 2023/10/15.
//

#ifndef IMAGEOPERATION_GRAYSCALETRANSFORMATION_H
#define IMAGEOPERATION_GRAYSCALETRANSFORMATION_H

#include <opencv2/core/mat.hpp>

#include "../../model/ImageModel.h"

class GrayscaleTransformation {

public:
    static void imageInversion(ImageModel *imageModel);

    static void logarithmic(ImageModel *imageModel);

    static void gamma(ImageModel *imageModel);

    static void histogramEqualization(ImageModel *imageModel);

    static void smoothSpatialFilter(ImageModel *imageModel);

    static void sharpeningSpatialFilter(ImageModel *imageModel);

public:

    static cv::Mat detail(cv::Mat *pMat, double (*pFunction)(double));

    static cv::Mat detailMultiChannel(cv::Mat *pMat, void (*pFunction)(cv::Mat &, cv::Mat &));
};


#endif //IMAGEOPERATION_GRAYSCALETRANSFORMATION_H
