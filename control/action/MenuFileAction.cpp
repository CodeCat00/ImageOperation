//
// Created by ASUS on 2023/10/4.
//

#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <QImageWriter>
#include "MenuFileAction.h"

void MenuFileAction::open(ImageModel *imageModel, FilePathRecord *filePathRecord) {
    QString fatherPath = filePathRecord->openFilePath.isEmpty() ? "\\" : filePathRecord->openFilePath;

    QString filePath = QFileDialog::getOpenFileName(nullptr, QString::fromLocal8Bit("打开图片"), fatherPath);
    if (filePath == nullptr || filePath.isEmpty()) {
        return;
    }

    QString fileName = QFileInfo(filePath).filePath();
    if (fileName == nullptr || fileName.isEmpty()) {
        QMessageBox::information(nullptr, QString::fromLocal8Bit("图片加载异常"), QString::fromLocal8Bit("路径为空"));
        return;
    }

    imageModel->readImage(fileName);
    if (imageModel->inImage.isNull()) {
        QMessageBox::information(nullptr, QString::fromLocal8Bit("图片加载异常"),
                                 QString::fromLocal8Bit("读取图片失败"));
    }

    filePathRecord->setCurrentFileName(fileName);
}

QString MenuFileAction::save(QImage image, FilePathRecord *filePathRecord) {

    if (image.isNull()) {
        QMessageBox::information(nullptr, QString::fromLocal8Bit("保存失败"),
                                 QString::fromLocal8Bit("没有提取纹理贴图，请先提取"));
        return nullptr;
    }

    QString filePath = filePathRecord->saveFilePath;
    if (filePath.isNull()) {
        filePath = QFileDialog::getExistingDirectory(nullptr, QString::fromLocal8Bit("请设置保存路径"), "/");
        if (filePath.isEmpty()) {
            return nullptr;
        }
    }

    QString currentFileName = filePathRecord->currentFileName;
    QString fileName = filePath + "\\texture_" + QFileInfo(currentFileName).fileName();
    QImageWriter writer(fileName);
    if (!writer.write(image)) {
        QMessageBox::information(nullptr, QString::fromLocal8Bit("保存失败"),
                                 QString::fromLocal8Bit("请重试"));
        return nullptr;
    }

    return fileName;
}

void MenuFileAction::setOpenFilePath(FilePathRecord *filePathRecord) {
    filePathRecord->setOpenFilePath();
}

void MenuFileAction::setSaveFilePath(FilePathRecord *filePathRecord) {
    filePathRecord->setSaveFilePath();
}