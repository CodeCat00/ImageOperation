//
// Created by ASUS on 2023/10/4.
//

#include <iostream>
#include "MainWindow.h"

#include "../../control/image/ImageProcess.h"
#include "../../control/image/example/GrayscaleTransformation.h"
#include "../../control/image/example/ImageSegmentation.h"
#include "../../control/image/example/Morphology.h"
#include "../../control/image/example/FrequencyDomainFiltering.h"
#include "../../control/image/example/RestorationAndReconstruction.h"

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


    // 菜单栏 -> 编辑 -> 灰度变换
    connect(mainUi.grayProcessingAct, &QAction::triggered, this, &MainWindow::grayProcessing);
    connect(mainUi.imageInversionAct, &QAction::triggered, this, &MainWindow::imageInversion);
    connect(mainUi.logarithmicAct, &QAction::triggered, this, &MainWindow::logarithmic);
    connect(mainUi.gammaAct, &QAction::triggered, this, &MainWindow::gamma);
    connect(mainUi.histogramEqualizationAct, &QAction::triggered, this, &MainWindow::histogramEqualization);
    connect(mainUi.smoothSpatialFilterAct, &QAction::triggered, this, &MainWindow::smoothSpatialFilter);
    connect(mainUi.sharpeningSpatialFilterAct, &QAction::triggered, this, &MainWindow::sharpeningSpatialFilter);

    // 菜单栏 -> 编辑 -> 滤波处理
    connect(mainUi.gaussianBlurAct, &QAction::triggered, this, &MainWindow::gaussianBlur);
    connect(mainUi.medianBlurAct, &QAction::triggered, this, &MainWindow::medianBlur);
    connect(mainUi.sobelAct, &QAction::triggered, this, &MainWindow::sobel);
    connect(mainUi.laplacianAct, &QAction::triggered, this, &MainWindow::laplacian);
    connect(mainUi.meanFilterAct, &QAction::triggered, this, &MainWindow::meanFilter);

    // 菜单栏 -> 编辑 -> 噪声
    connect(mainUi.gaussianNoiseAct, &QAction::triggered, this, &MainWindow::gaussianNoise);
    connect(mainUi.saltAndPepperNoiseAct, &QAction::triggered, this, &MainWindow::saltAndPepperNoise);

    // 菜单栏 -> 编辑 -> 形态学
    connect(mainUi.binaryImageAct, &QAction::triggered, this, &MainWindow::binaryImage);
    connect(mainUi.corrosionAct, &QAction::triggered, this, &MainWindow::corrosion);
    connect(mainUi.expansionAct, &QAction::triggered, this, &MainWindow::expansion);
    connect(mainUi.openOperationAct, &QAction::triggered, this, &MainWindow::openOperation);
    connect(mainUi.closedOperationAct, &QAction::triggered, this, &MainWindow::closedOperation);
    connect(mainUi.boundaryExtractionAct, &QAction::triggered, this, &MainWindow::boundaryExtraction);
    connect(mainUi.holeFillingAct, &QAction::triggered, this, &MainWindow::holeFilling);

    // 菜单栏 -> 编辑 -> 图像分割
    connect(mainUi.outlierDetectionAct, &QAction::triggered, this, &MainWindow::outlierDetection);
    connect(mainUi.edgeDetectionAct, &QAction::triggered, this, &MainWindow::edgeDetection);
    connect(mainUi.adaptiveThresholdAct, &QAction::triggered, this, &MainWindow::adaptiveThreshold);
    connect(mainUi.watershedAct, &QAction::triggered, this, &MainWindow::watershed);

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

void MainWindow::grayProcessing() {
    GrayscaleTransformation::grayProcessing(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::imageInversion() {
    GrayscaleTransformation::imageInversion(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::logarithmic() {
    GrayscaleTransformation::logarithmic(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::gamma() {
    GrayscaleTransformation::gamma(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::histogramEqualization() {
    GrayscaleTransformation::histogramEqualization(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::smoothSpatialFilter() {
    GrayscaleTransformation::smoothSpatialFilter(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::sharpeningSpatialFilter() {
    GrayscaleTransformation::sharpeningSpatialFilter(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::gaussianBlur() {
    FrequencyDomainFiltering::gaussianBlur(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::medianBlur() {
    FrequencyDomainFiltering::medianBlur(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::sobel() {
    FrequencyDomainFiltering::sobel(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::laplacian() {
    FrequencyDomainFiltering::laplacian(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::meanFilter() {
    FrequencyDomainFiltering::meanFilter(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::gaussianNoise() {
    RestorationAndReconstruction::gaussianNoise(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::saltAndPepperNoise() {
    RestorationAndReconstruction::saltAndPepperNoise(&imageModel);
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

void MainWindow::corrosion() {
    Morphology::corrosion(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::expansion() {
    Morphology::expansion(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::openOperation() {
    Morphology::openOperation(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::closedOperation() {
    Morphology::closedOperation(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::boundaryExtraction() {
    Morphology::boundaryExtraction(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::holeFilling() {
    Morphology::holeFilling(&imageModel);
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

void MainWindow::edgeDetection() {
    ImageSegmentation::edgeDetection(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::adaptiveThreshold() {
    ImageSegmentation::adaptiveThreshold(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}

void MainWindow::watershed() {
    ImageSegmentation::watershed(&imageModel);
    if(imageModel.resultImage.isNull()){
        std::cout << "result is null" << std::endl;
        return;
    }

    mainUi.tabLabel1->setPixmap(imageModel.getShowResultImage());
}
