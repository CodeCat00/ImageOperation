//
// Created by ASUS on 2023/10/21.
//

#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc.hpp>
#include "ImageMatDetailUtil.h"

cv::Mat ImageMatDetailUtil::detail(cv::Mat *pMat, double (*pFunction)(double)) {

    cv::Mat result = pMat->clone();

    for (int i = 0; i < pMat->rows; i++)
    {
        for (int j = 0; j < pMat->cols; j++)
        {
            for(int k = 0;k < 3;++k){
                result.at<cv::Vec3b>(i, j)[k] = pFunction((double)(pMat->at<cv::Vec3b>(i, j)[k]));
            }
        }
    }

    normalize(result, result, 0, 255, cv::NORM_MINMAX);

    return result;
}

cv::Mat ImageMatDetailUtil::detailMultiChannel(cv::Mat *pMat, void (*pFunction)(cv::Mat &src, cv::Mat &dest)) {

    cv::Mat ycrcb;
    cv::Mat result;

    cv::cvtColor( *pMat, ycrcb, cv::COLOR_BGR2YCrCb);

    std::vector<cv::Mat> channels;
    cv::split( ycrcb, channels );

    pFunction(channels[0], channels[0] );
    pFunction(channels[1], channels[1] );
    pFunction(channels[2], channels[2] );

    cv::merge( channels, ycrcb );

    cv::cvtColor( ycrcb, result, cv::COLOR_YCrCb2BGR );

    return result;
}