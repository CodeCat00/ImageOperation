//
// Created by ASUS on 2023/10/4.
//

#include <iostream>
#include "MainWindow.h"

#include "../../control/image/ImageProcess.h"
#include "../../control/image/GrayscaleTransformation.h"
#include "../../control/image/ImageSegmentation.h"
#include "../../control/image/Morphology.h"
#include "../../control/image/ColorImageProcessing.h"

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
    connect(mainUi.imageInversionAct, &QAction::triggered, this, &MainWindow::imageInversionAct);
    connect(mainUi.outlierDetectionAct, &QAction::triggered, this, &MainWindow::outlierDetection);
    connect(mainUi.binaryImageAct, &QAction::triggered, this, &MainWindow::binaryImage);
    connect(mainUi.grayscaleProcessingAct, &QAction::triggered, this, &MainWindow::grayscaleProcessing);

    // 菜单栏 -> 设置

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

    mainUi.openImageFileLabel->setPixmap(imageModel.getShowInImage());
}

void MainWindow::save() {
    QString fileName = MenuFileAction::save(imageModel.saveImage, &filePathRecord);
    if (fileName.isEmpty()) {
        return;
    }

    mainUi.statusBar->messageChanged(fileName);
}

void MainWindow::setOpenFilePath() {
    MenuFileAction::setOpenFilePath(&filePathRecord);

    if (!filePathRecord.currentFileName.isEmpty()) {
        imageModel.readImage(filePathRecord.currentFileName);
        mainUi.openImageFileLabel->setPixmap(imageModel.getShowInImage());

        std::cout << filePathRecord.currentFileName.toStdString() << std::endl;
    }
}

void MainWindow::setSaveFilePath() {
    MenuFileAction::setSaveFilePath(&filePathRecord);
}

/* ----------------------------------- 前后页按钮和滚轮 ---------------------------------------------------------------- */

void MainWindow::preImage() {
    QString fileName = filePathRecord.getPreFileName();
    if (fileName.isEmpty()) {
        return;
    }

    imageModel.readImage(fileName);

    mainUi.openImageFileLabel->setPixmap(imageModel.getShowInImage());
}

void MainWindow::nextImage() {
    QString fileName = filePathRecord.getNextFileName();
    if (fileName.isEmpty()) {
        return;
    }

    imageModel.readImage(fileName);

    mainUi.openImageFileLabel->setPixmap(imageModel.getShowInImage());
}

void MainWindow::wheelEvent(QWheelEvent *event) {
    if (QApplication::keyboardModifiers() == Qt::ControlModifier) {
        if (mainUi.openImageFileLabel->underMouse()) {
            if (event->delta() > 0) {
                ImageProcess::getBiggerImage(&imageModel.inImage, &imageModel.showInImage);
            } else {
                ImageProcess::getSmallerShowImage(&imageModel.inImage, &imageModel.showInImage);
            }
            mainUi.openImageFileLabel->setPixmap(imageModel.getShowInImage());
        }

        if (mainUi.tabLabel1->underMouse()) {
            if (event->delta() > 0) {
                ImageProcess::getBiggerImage(&imageModel.resultImage, &imageModel.showResultImage);
            } else {
                ImageProcess::getSmallerShowImage(&imageModel.resultImage, &imageModel.showResultImage);
            }
            mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
        }
        event->accept();
    } else {
        QMainWindow::wheelEvent(event);
    }
}

/* ----------------------------------- 图像示例程序 ------------------------------------------------------------------- */

void MainWindow::imageInversionAct() {
    GrayscaleTransformation::imageInversion(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::outlierDetection() {
    ImageSegmentation::outlierDetection(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::binaryImage() {
    Morphology::binaryImage(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::grayscaleProcessing() {
    ColorImageProcessing::grayscaleProcessing(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}
