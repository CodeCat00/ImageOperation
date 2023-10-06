//
// Created by ASUS on 2023/10/4.
//

#include <qsettings.h>
#include <QFileDialog>
#include <QMimeDatabase>
#include <QMimeType>
#include <QMessageBox>
#include "FilePathRecord.h"

void FilePathRecord::setOpenFilePath() {

    openFileNameVec.clear();
    currentPos = 0;

    openFilePath = QFileDialog::getExistingDirectory(nullptr, QString::fromLocal8Bit("请设置打开路劲哦"), "/");
    if (openFilePath.isEmpty()) {
        return;
    }

    QDir openImageFileDir(openFilePath);
    if (!openImageFileDir.exists()) {
        return;
    }

    openImageFileDir.setFilter(QDir::Files | QDir::NoDotAndDotDot);
    QFileInfoList imageList = openImageFileDir.entryInfoList();
    if (imageList.empty()) {
        return;
    }


    for (const auto &i: imageList) {
        QMimeDatabase db;
        QMimeType mime = db.mimeTypeForFile(i.filePath());

        if (mime.name().startsWith("image/")) {
            openFileNameVec.emplace_back(i.filePath());
        }
    }

    if (!openFileNameVec.empty()) {
        currentFileName = openFileNameVec[0];
    }
}

void FilePathRecord::setSaveFilePath() {
    saveFilePath = QFileDialog::getExistingDirectory(nullptr, QString::fromLocal8Bit("请设置保存路劲哦"), "/");
}

void FilePathRecord::setCurrentFileName(const QString &fileName) {
    currentFileName = fileName;
}

QString FilePathRecord::getPreFileName() {
    if(!checkImagePath()){
        return "";
    }

    currentPos = (currentPos + 1 + openFileNameVec.size()) % openFileNameVec.size();

    return openFileNameVec[currentPos];
}

QString FilePathRecord::getNextFileName() {
    if(!checkImagePath()){
        return "";
    }

    currentPos = (currentPos - 1 + openFileNameVec.size()) % openFileNameVec.size();

    return openFileNameVec[currentPos];
}

bool FilePathRecord::checkImagePath() const {
    if(openFilePath.isEmpty()){
        QMessageBox::information(nullptr, QString::fromLocal8Bit("打开失败"),
                                 QString::fromLocal8Bit("没有设置保存路径哦"));
        return false;
    }

    if(openFileNameVec.empty()){
        QMessageBox::information(nullptr, QString::fromLocal8Bit("打开失败"),
                                 QString::fromLocal8Bit("当前路径下没有图片哦"));
        return false;
    }
    return true;
}