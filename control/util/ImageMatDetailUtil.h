//
// Created by ASUS on 2023/10/21.
//

#ifndef IMAGEOPERATION_IMAGEMATDETAILUTIL_H
#define IMAGEOPERATION_IMAGEMATDETAILUTIL_H


class ImageMatDetailUtil {

public:
    static cv::Mat detail(cv::Mat *pMat, double (*pFunction)(double));
    static cv::Mat detailMultiChannel(cv::Mat *pMat, void (*pFunction)(cv::Mat &, cv::Mat &));
};


#endif //IMAGEOPERATION_IMAGEMATDETAILUTIL_H
