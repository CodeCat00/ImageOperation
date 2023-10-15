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

    // 菜单栏 -> 操作
    void imageInversionAct();
    void outlierDetection();
    void binaryImage();
    void grayscaleProcessing();

    // 菜单栏 -> 设置

    // 输入图片窗口
    void preImage();

    void nextImage();

    // 纹理图片窗口


    // 滚轮
    void wheelEvent(QWheelEvent *event);
};

#endif //FETCHTEXTURE_MAINWINDOW_H
