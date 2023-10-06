//
// Created by ASUS on 2023/10/4.
//

#ifndef FETCHTEXTURE_MENUFILEACTION_H
#define FETCHTEXTURE_MENUFILEACTION_H


#include "../../model/ImageModel.h"
#include "../record/FilePathRecord.h"

class MenuFileAction {

public:

    static void open(ImageModel *imageModel, FilePathRecord *filePathRecord);

    static QString save(QImage image, FilePathRecord *filePathRecord);

    static void setOpenFilePath(FilePathRecord *filePathRecord);

    static void setSaveFilePath(FilePathRecord *filePathRecord);

};


#endif //FETCHTEXTURE_MENUFILEACTION_H
