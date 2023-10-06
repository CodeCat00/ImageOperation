//
// Created by ASUS on 2023/10/4.
//

#include <iostream>
#include "MainWindow.h"

#include "../../control/image/ImageProcess.h"

/* ---------------------------------------- 初始化部分 --------------------------------------------------------------- */

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    mainUi.setupUi(this);

    initSlot();
}

void MainWindow::initSlot() {

    // 菜单栏 -> 文件
    connect(mainUi.openAct, &QAction::triggered, this, &MainWindow::open);
    connect(mainUi.saveAct, &QAction::triggered, this, &MainWindow::save);
    connect(mainUi.exitAct, &QAction::triggered, this, &MainWindow::close);
    connect(mainUi.setOpenFilePathAct, &QAction::triggered, this, &MainWindow::setOpenFilePath);
    connect(mainUi.setSaveFilePathAct, &QAction::triggered, this, &MainWindow::setSaveFilePath);


    // 菜单栏 -> 操作
    connect(mainUi.shotAct, &QAction::triggered, this, &MainWindow::screenShot);
    connect(mainUi.fourPointShotAct, &QAction::triggered, this, &MainWindow::screenShotByFourPoint);

    // 菜单栏 -> 设置
    connect(mainUi.smallShotImageSizeAct, &QAction::triggered, this, &MainWindow::setUnitTextureSizeFor256);
    connect(mainUi.midShotImageSizeAct, &QAction::triggered, this, &MainWindow::setUnitTextureSizeFor512);
    connect(mainUi.bigShotImageSizeAct, &QAction::triggered, this, &MainWindow::setUnitTextureSizeFor1024);
    connect(mainUi.autoShotImageSizeAct, &QAction::triggered, this, &MainWindow::setUnitTextureSizeForAuto);

    // 输入图片窗口
    connect(mainUi.preImageButton, &QPushButton::clicked, this, &MainWindow::preImage);
    connect(mainUi.nextImageButton, &QPushButton::clicked, this, &MainWindow::nextImage);

    // 纹理图片窗口
}

/* ---------------------------------------- 实现部分 --------------------------------------------------------------- */

/* ---------------------------------------- slot --------------------------------------------------------------- */

void MainWindow::open() {
    MenuFileAction::open(&imageModel, &filePathRecord);
    if (imageModel.inImage.isNull()) {
        return;
    }

    mainUi.openImageFileLabel->setPixmap(imageModel.getShowImage());
}

void MainWindow::save() {
    QString fileName = MenuFileAction::save(imageModel.getSaveImage(), &filePathRecord);
    if (fileName.isEmpty()) {
        return;
    }

    mainUi.statusBar->messageChanged(fileName);
}

void MainWindow::setOpenFilePath() {
    MenuFileAction::setOpenFilePath(&filePathRecord);

    if (!filePathRecord.currentFileName.isEmpty()) {
        imageModel.readImage(filePathRecord.currentFileName);
        mainUi.openImageFileLabel->setPixmap(imageModel.getShowImage());

        std::cout << filePathRecord.currentFileName.toStdString() << std::endl;
    }
}

void MainWindow::setSaveFilePath() {
    MenuFileAction::setSaveFilePath(&filePathRecord);
}

void MainWindow::screenShot() {}

void MainWindow::screenShotByFourPoint() {}

void MainWindow::setUnitTextureSizeFor256() {}

void MainWindow::setUnitTextureSizeFor512() {}

void MainWindow::setUnitTextureSizeFor1024() {}

void MainWindow::setUnitTextureSizeForAuto() {}

void MainWindow::preImage() {
    QString fileName = filePathRecord.getPreFileName();
    if (fileName.isEmpty()) {
        return;
    }

    imageModel.readImage(fileName);

    mainUi.openImageFileLabel->setPixmap(imageModel.getShowImage());
}

void MainWindow::nextImage() {
    QString fileName = filePathRecord.getNextFileName();
    if (fileName.isEmpty()) {
        return;
    }

    imageModel.readImage(fileName);

    mainUi.openImageFileLabel->setPixmap(imageModel.getShowImage());
}

void MainWindow::wheelEvent(QWheelEvent *event) {
    if (QApplication::keyboardModifiers() == Qt::ControlModifier) {
        if (mainUi.openImageFileScroll->underMouse()) {
            if (event->delta() > 0) {
                ImageProcess::getBiggerImage(&imageModel.inImage, &imageModel.showImage);
            } else {
                ImageProcess::getSmallerShowImage(&imageModel.inImage, &imageModel.showImage);
            }
            mainUi.openImageFileLabel->setPixmap(imageModel.getShowImage());
        }

        if (mainUi.stitchTextureScroll->underMouse()) {
            if (event->delta() > 0) {
                ImageProcess::getBiggerImage(&imageModel.inImage, &imageModel.unitTexture);
            } else {
                ImageProcess::getSmallerShowImage(&imageModel.inImage, &imageModel.unitTexture);
            }
            mainUi.openImageFileLabel->setPixmap(imageModel.getShowImage());
        }
        event->accept();
    } else {
        QMainWindow::wheelEvent(event);
    }
}