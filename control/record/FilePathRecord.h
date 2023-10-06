//
// Created by ASUS on 2023/10/4.
//

#pragma once

#include <QString>
#include <vector>

class FilePathRecord {

public:

    // 主动设置路径
    QString openFilePath;
    QString saveFilePath;

    // 当前文件名
    QString currentFileName;

    // 文件名列表
    int currentPos = 0;
    std::vector<QString> openFileNameVec;

public:

    void setOpenFilePath();

    void setSaveFilePath();

    void setCurrentFileName(const QString &fileName);

    QString getPreFileName();

    QString getNextFileName();

private:
    bool checkImagePath() const;

};
