//
// Created by ASUS on 2023/10/22.
//

#include <algorithm>
#include "ImageOtherUtil.h"

int ImageOtherUtil::computeSize(int width, int high,int add) {
    return std::min(width,high) / 500 * 2 + add;
}
