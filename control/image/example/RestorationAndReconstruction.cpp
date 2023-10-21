//
// Created by ASUS on 2023/10/15.
//

#include <opencv2/core/mat.hpp>
#include "RestorationAndReconstruction.h"
#include "../../util/ImageFormatConverter.h"

void RestorationAndReconstruction::gaussianNoise(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);
    cv::Mat noise(srcMat.size(), srcMat.type());
    cv::Mat resultMat = srcMat.clone();

    cv::RNG rng(time(NULL));
    rng.fill(noise, cv::RNG::NORMAL, 10,  36);  /*产生高斯分布矩阵*/
    cv::add(srcMat, noise, resultMat);

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}

void RestorationAndReconstruction::saltAndPepperNoise(ImageModel *imageModel) {

    cv::Mat srcMat = ImageFormatConverter::QImageToMat(imageModel->inImage);

    cv::Mat resultMat = srcMat.clone();

    cv::RNG rng(12345);
    int h = srcMat.rows;
    int w = srcMat.cols;
    int nums = 10000;
    for (int i = 0; i < nums; i++) {
        int x = rng.uniform(0, w);
        int y = rng.uniform(0, h);
        if (i % 2 == 1) {
            resultMat.at<cv::Vec3b>(y, x) = cv::Vec3b(255, 255, 255);
        }
        else {
            resultMat.at<cv::Vec3b>(y, x) = cv::Vec3b(0, 0, 0);
        }
    }

    imageModel->setResultImage(ImageFormatConverter::MatToQImage(resultMat));

}
