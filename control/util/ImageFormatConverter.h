//
// Created by ASUS on 2023/10/5.
//

#ifndef FETCHTEXTURE_IMAGEFORMATCONVERTER_H
#define FETCHTEXTURE_IMAGEFORMATCONVERTER_H

#include <QImage>
#include <QImageReader>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

class ImageFormatConverter {
public:
    static cv::Mat QImageToMat(const QImage& image);
    static QImage MatToQImage(const cv::Mat& mat);
};


#endif //FETCHTEXTURE_IMAGEFORMATCONVERTER_H
