//
// Created by ASUS on 2023/10/4.
//

#ifndef FETCHTEXTURE_MAINWINDOW_H
#define FETCHTEXTURE_MAINWINDOW_H


#include <QtWidgets/QMainWindow>
#include <QtWidgets/QtWidgets>

#include "../../model/ImageModel.h"
#include "../../control/action/MenuFileAction.h"
#include "../../control/action/MenuSettingAction.h"
#include "../../control/action/MenuOperationAction.h"
#include "../../control/action/InImageWidgetAction.h"
#include "../../control/action/StitchTextureWidgetAction.h"
#include "../../control/action/UnitTextureWidgetAction.h"
#include "../source/ui/ui_MainUi.h"
#include "../../control/record/FilePathRecord.h"

class MainWindow : public QMainWindow {

Q_OBJECT

public:
    MainWindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainUi mainUi{};

    // 图片及纹理模型
    ImageModel imageModel;
    FilePathRecord filePathRecord;

    // 页面操作实现类
    MenuFileAction menuFileAction;
    MenuSettingAction menuSettingAction;
    MenuOperationAction menuOperationAction;
    InImageWidgetAction inImageWidgetAction;
    StitchTextureWidgetAction stitchTextureWidgetAction;
    UnitTextureWidgetAction unitTextureWidgetAction;

private :
    void initSlot();

private slots:

    // 菜单栏 -> 文件
    void open();
    void save();
    void setOpenFilePath();
    void setSaveFilePath();

    // 菜单栏 -> 操作 -> 灰度变换
    void grayProcessing();
    void imageInversion();
    void logarithmic();
    void gamma();
    void histogramEqualization();
    void smoothSpatialFilter();
    void sharpeningSpatialFilter();

    // 菜单栏 -> 操作 -> 滤波变换
    void gaussianBlur();
    void medianBlur();
    void sobel();
    void laplacian();
    void meanFilter();

    // 菜单栏 -> 操作 -> 噪声
    void gaussianNoise();
    void saltAndPepperNoise();

    // 菜单栏 -> 操作 -> 形态学
    void binaryImage();
    void corrosion();
    void expansion();
    void openOperation();
    void closedOperation();
    void boundaryExtraction();
    void holeFilling();

    // 菜单栏 -> 操作 -> 图像分割
    void outlierDetection();
    void edgeDetection();
    void adaptiveThreshold();
    void watershed();

    // 菜单栏 -> 设置

    // 输入图片窗口
    void preImage();
    void nextImage();

    // 滚轮
    void wheelEvent(QWheelEvent *event);
};

#endif //FETCHTEXTURE_MAINWINDOW_H
