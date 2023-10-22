/********************************************************************************
** Form generated from reading UI file 'MainUi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainUi
{
public:
    QAction *openAct;
    QAction *saveAct;
    QAction *printAct;
    QAction *exitAct;
    QAction *shotAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
    QAction *smallShotImageSizeAct;
    QAction *midShotImageSizeAct;
    QAction *bigShotImageSizeAct;
    QAction *autoShotImageSizeAct;
    QAction *setOpenFilePathAct;
    QAction *setSaveFilePathAct;
    QAction *nextImageAct;
    QAction *preImageAct;
    QAction *personServerSetAct;
    QAction *merchantServerSetAct;
    QAction *autoPutDateToPersonServerAct;
    QAction *autoPutDateToMerchantServerAct;
    QAction *putSingleFileAct;
    QAction *putBatchFileAct;
    QAction *jiaoZhengAct;
    QAction *actSize3;
    QAction *actSize4;
    QAction *actSize5;
    QAction *actSize6;
    QAction *actSize7;
    QAction *actSize8;
    QAction *recentOpenFilePath_1;
    QAction *recentOpenFilePath_2;
    QAction *recentOpenFilePath_3;
    QAction *OneCmAct;
    QAction *postAct;
    QAction *rectAct;
    QAction *act2x2;
    QAction *act3x3;
    QAction *actLog;
    QAction *actCompress;
    QAction *fourPointShotAct;
    QAction *pureColor;
    QAction *cell;
    QAction *stripe;
    QAction *action2x2;
    QAction *action3x3;
    QAction *gray;
    QAction *actiongray;
    QAction *imageInversionAct;
    QAction *gaussianBlurAct;
    QAction *gaussianNoiseAct;
    QAction *imageSegmentationAct;
    QAction *imagePyramidAct;
    QAction *binaryImageAct;
    QAction *outlierDetectionAct;
    QAction *action1;
    QAction *logarithmicAct;
    QAction *gammaAct;
    QAction *histogramEqualizationAct;
    QAction *smoothSpatialFilterAct;
    QAction *sharpeningSpatialFilterAct;
    QAction *medianBlurAct;
    QAction *sobelAct;
    QAction *laplacianAct;
    QAction *meanFilterAct;
    QAction *statisticalSortingFilterAct;
    QAction *adaptiveFilterAct;
    QAction *saltAndPepperNoiseAct;
    QAction *grayProcessingAct;
    QAction *corrosionAct;
    QAction *expansionAct;
    QAction *openOperationAct;
    QAction *closedOperationAct;
    QAction *boundaryExtractionAct;
    QAction *holeFillingAct;
    QAction *edgeDetectionAct;
    QAction *adaptiveThresholdAct;
    QAction *watershedAct;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *openImageVerticalLayout;
    QHBoxLayout *openImageButtonHorizontalLayout;
    QPushButton *preImageButton;
    QSpacerItem *openImageHorizontalSpacer;
    QPushButton *nextImageButton;
    QScrollArea *openImageFileScroll;
    QWidget *openImageFileScrollWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *openImageFileLabel;
    QTabWidget *tabWidget;
    QWidget *tabWidget1;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *tabScrollArea1;
    QWidget *tabInnerWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *tabLabel1;
    QWidget *tabWidget2;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *tabScrollArea2;
    QWidget *tabInnerWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *tabLabel2;
    QWidget *tabWidget3;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *tabInnerWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *tabLabel3;
    QWidget *tabWidget4;
    QHBoxLayout *horizontalLayout_6;
    QScrollArea *scrollArea_2;
    QWidget *tabInnerWidget4;
    QVBoxLayout *verticalLayout_4;
    QLabel *tabLabel4;
    QWidget *tabWidget5;
    QHBoxLayout *horizontalLayout_7;
    QScrollArea *scrollArea_3;
    QWidget *tabInnerWidget5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *exampleMenu;
    QMenu *color;
    QMenu *blur;
    QMenu *noise;
    QMenu *morphology;
    QMenu *segmentation;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainUi)
    {
        if (MainUi->objectName().isEmpty())
            MainUi->setObjectName(QString::fromUtf8("MainUi"));
        MainUi->resize(1024, 748);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainUi->sizePolicy().hasHeightForWidth());
        MainUi->setSizePolicy(sizePolicy);
        MainUi->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QWidget {\n"
"       background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #708090,stop:1 #C8C8D0);\n"
"       }\n"
"\n"
"QMenuBar {\n"
"       min-width: 80px;\n"
"       min-height: 35px;\n"
"       }\n"
"\n"
"QMenu {\n"
"       border-radius: 30px;\n"
"       }\n"
"QMenu::item {\n"
"       min-width: 60px;\n"
"       min-height: 40px;\n"
"       padding: 2px 25px 2px 30px;\n"
"       margin-left: 5px;\n"
"       }\n"
"QMenu::item:selected {\n"
"       border-width:1px;\n"
"       border-color: #516589;\n"
"       background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(45,133,207), stop: 1.0 rgb(125,195,250));\n"
"       color:#E6FFFF;\n"
"       }\n"
"\n"
"QToolBar {\n"
"       min-height: 1px;\n"
"       }\n"
"\n"
"QPushButton {\n"
"       min-width:100px;\n"
"       min-height:40px;\n"
"       border-radius:10px;\n"
"       }\n"
"\n"
"QScrollBar:horizontal {\n"
"       border: 1px solid #222222;\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 "
                        "#ffffff, stop: 0.5 #ffffff, stop: 1 #ffffff);\n"
"       height: 7px;\n"
"       margin: 0px 16px 0 16px;\n"
"       }\n"
"QScrollBar::handle:horizontal {\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #b1b1b1, stop: 0.5 #b3b3b3, stop: 1 #b1b1b1);\n"
"       min-height: 20px;\n"
"       border-radius: 20px;\n"
"       }\n"
"QScrollBar::add-line:horizontal {\n"
"       border: 1px solid #1b1b19;\n"
"       border-radius: 20px;\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #999999, stop: 1 #999999);\n"
"       width: 14px;\n"
"       subcontrol-position: right;\n"
"       subcontrol-origin: margin;\n"
"       }\n"
"QScrollBar::sub-line:horizontal {\n"
"       border: 1px solid #1b1b19;\n"
"       border-radius: 20px;\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #999999, stop: 1 #999999);\n"
"       width: 14px;\n"
"       subcontrol-position: left;\n"
"       subcontrol-origin: margin;\n"
"       }\n"
"QScrollBar::right-arr"
                        "ow:horizontal, QScrollBar::left-arrow:horizontal {\n"
"       border: 1px solid black;\n"
"       width: 1px;\n"
"       height: 1px;\n"
"       background: white;\n"
"       }\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"       background: none;\n"
"       }\n"
"QScrollBar:vertical {\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #ffffff, stop: 0.5 #ffffff, stop: 1 #ffffff);\n"
"       width: 7px;\n"
"       margin: 16px 0 16px 0;\n"
"       border: 1px solid #222222;\n"
"       }\n"
"QScrollBar::handle:vertical {\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #b1b1b1, stop: 0.5 #b3b3b3, stop: 1 #b1b1b1);\n"
"       min-height: 20px;\n"
"       border-radius: 20px;\n"
"       }\n"
"QScrollBar::add-line:vertical {\n"
"       border: 1px solid #1b1b19;\n"
"       border-radius: 20px;\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: 1 #999999);\n"
"       height: 14px;\n"
"       su"
                        "bcontrol-position: bottom;\n"
"       subcontrol-origin: margin;\n"
"       }\n"
"QScrollBar::sub-line:vertical {\n"
"       border: 1px solid #1b1b19;\n"
"       border-radius: 20px;\n"
"       background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: 1 #999999);\n"
"       height: 14px;\n"
"       subcontrol-position: top;\n"
"       subcontrol-origin: margin;\n"
"       }\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"       border: 1px solid black;\n"
"       width: 1px;\n"
"       height: 1px;\n"
"       background: white;\n"
"       }\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"       background: none;\n"
"       }\n"
"\n"
"QTabWidget::pane {\n"
"       border: 1px solid #444;\n"
"       top: 1px;\n"
"       }\n"
"\n"
"QTabBar::tab {\n"
"       color: #ffffff;\n"
"       border: 1px solid #444;\n"
"       border-bottom-style: none;\n"
"       background-color: #999999;\n"
"       padding-left: 10px;\n"
"       padding-right: 10px;"
                        "\n"
"       padding-top: 3px;\n"
"       padding-bottom: 2px;\n"
"       margin-right: -1px;\n"
"       min-width: 80px;\n"
"       min-height: 30px;\n"
"       }\n"
"QTabBar::tab:last {\n"
"       margin-right: 0;\n"
"       border-top-right-radius: 3px;\n"
"       }\n"
"QTabBar::tab:first:!selected {\n"
"       margin-left: 0px;\n"
"       border-top-left-radius: 3px;\n"
"       }\n"
"QTabBar::tab:!selected {\n"
"       border-bottom-style: solid;\n"
"       margin-top: 3px;\n"
"       background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #1874CD, stop:.4 #737373);\n"
"       }\n"
"QTabBar::tab:selected {\n"
"       border-top-left-radius: 3px;\n"
"       border-top-right-radius: 3px;\n"
"       margin-bottom: 0px;\n"
"       }\n"
"QTabBar::tab:!selected:hover  {\n"
"       border-top-left-radius: 3px;\n"
"       border-top-right-radius: 3px;\n"
"       background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #737373, stop:0.2 #999999, stop:0.1 #b1b1b1);\n"
"       }\n"
""
                        "\n"
"   "));
        openAct = new QAction(MainUi);
        openAct->setObjectName(QString::fromUtf8("openAct"));
        saveAct = new QAction(MainUi);
        saveAct->setObjectName(QString::fromUtf8("saveAct"));
        saveAct->setCheckable(false);
        saveAct->setEnabled(true);
        printAct = new QAction(MainUi);
        printAct->setObjectName(QString::fromUtf8("printAct"));
        printAct->setEnabled(false);
        exitAct = new QAction(MainUi);
        exitAct->setObjectName(QString::fromUtf8("exitAct"));
        shotAct = new QAction(MainUi);
        shotAct->setObjectName(QString::fromUtf8("shotAct"));
        shotAct->setEnabled(false);
        aboutAct = new QAction(MainUi);
        aboutAct->setObjectName(QString::fromUtf8("aboutAct"));
        aboutQtAct = new QAction(MainUi);
        aboutQtAct->setObjectName(QString::fromUtf8("aboutQtAct"));
        smallShotImageSizeAct = new QAction(MainUi);
        smallShotImageSizeAct->setObjectName(QString::fromUtf8("smallShotImageSizeAct"));
        smallShotImageSizeAct->setCheckable(true);
        midShotImageSizeAct = new QAction(MainUi);
        midShotImageSizeAct->setObjectName(QString::fromUtf8("midShotImageSizeAct"));
        midShotImageSizeAct->setCheckable(true);
        bigShotImageSizeAct = new QAction(MainUi);
        bigShotImageSizeAct->setObjectName(QString::fromUtf8("bigShotImageSizeAct"));
        bigShotImageSizeAct->setCheckable(true);
        autoShotImageSizeAct = new QAction(MainUi);
        autoShotImageSizeAct->setObjectName(QString::fromUtf8("autoShotImageSizeAct"));
        autoShotImageSizeAct->setCheckable(true);
        autoShotImageSizeAct->setChecked(false);
        setOpenFilePathAct = new QAction(MainUi);
        setOpenFilePathAct->setObjectName(QString::fromUtf8("setOpenFilePathAct"));
        setSaveFilePathAct = new QAction(MainUi);
        setSaveFilePathAct->setObjectName(QString::fromUtf8("setSaveFilePathAct"));
        nextImageAct = new QAction(MainUi);
        nextImageAct->setObjectName(QString::fromUtf8("nextImageAct"));
        nextImageAct->setEnabled(false);
        preImageAct = new QAction(MainUi);
        preImageAct->setObjectName(QString::fromUtf8("preImageAct"));
        preImageAct->setEnabled(false);
        personServerSetAct = new QAction(MainUi);
        personServerSetAct->setObjectName(QString::fromUtf8("personServerSetAct"));
        merchantServerSetAct = new QAction(MainUi);
        merchantServerSetAct->setObjectName(QString::fromUtf8("merchantServerSetAct"));
        autoPutDateToPersonServerAct = new QAction(MainUi);
        autoPutDateToPersonServerAct->setObjectName(QString::fromUtf8("autoPutDateToPersonServerAct"));
        autoPutDateToPersonServerAct->setCheckable(true);
        autoPutDateToPersonServerAct->setChecked(true);
        autoPutDateToMerchantServerAct = new QAction(MainUi);
        autoPutDateToMerchantServerAct->setObjectName(QString::fromUtf8("autoPutDateToMerchantServerAct"));
        autoPutDateToMerchantServerAct->setCheckable(true);
        autoPutDateToMerchantServerAct->setChecked(true);
        putSingleFileAct = new QAction(MainUi);
        putSingleFileAct->setObjectName(QString::fromUtf8("putSingleFileAct"));
        putBatchFileAct = new QAction(MainUi);
        putBatchFileAct->setObjectName(QString::fromUtf8("putBatchFileAct"));
        jiaoZhengAct = new QAction(MainUi);
        jiaoZhengAct->setObjectName(QString::fromUtf8("jiaoZhengAct"));
        actSize3 = new QAction(MainUi);
        actSize3->setObjectName(QString::fromUtf8("actSize3"));
        actSize3->setCheckable(true);
        actSize3->setChecked(false);
        actSize4 = new QAction(MainUi);
        actSize4->setObjectName(QString::fromUtf8("actSize4"));
        actSize4->setCheckable(true);
        actSize4->setChecked(false);
        actSize5 = new QAction(MainUi);
        actSize5->setObjectName(QString::fromUtf8("actSize5"));
        actSize5->setCheckable(true);
        actSize6 = new QAction(MainUi);
        actSize6->setObjectName(QString::fromUtf8("actSize6"));
        actSize6->setCheckable(true);
        actSize7 = new QAction(MainUi);
        actSize7->setObjectName(QString::fromUtf8("actSize7"));
        actSize7->setCheckable(true);
        actSize8 = new QAction(MainUi);
        actSize8->setObjectName(QString::fromUtf8("actSize8"));
        actSize8->setCheckable(true);
        recentOpenFilePath_1 = new QAction(MainUi);
        recentOpenFilePath_1->setObjectName(QString::fromUtf8("recentOpenFilePath_1"));
        recentOpenFilePath_2 = new QAction(MainUi);
        recentOpenFilePath_2->setObjectName(QString::fromUtf8("recentOpenFilePath_2"));
        recentOpenFilePath_3 = new QAction(MainUi);
        recentOpenFilePath_3->setObjectName(QString::fromUtf8("recentOpenFilePath_3"));
        OneCmAct = new QAction(MainUi);
        OneCmAct->setObjectName(QString::fromUtf8("OneCmAct"));
        OneCmAct->setEnabled(false);
        postAct = new QAction(MainUi);
        postAct->setObjectName(QString::fromUtf8("postAct"));
        postAct->setEnabled(false);
        rectAct = new QAction(MainUi);
        rectAct->setObjectName(QString::fromUtf8("rectAct"));
        rectAct->setEnabled(false);
        act2x2 = new QAction(MainUi);
        act2x2->setObjectName(QString::fromUtf8("act2x2"));
        act2x2->setCheckable(true);
        act3x3 = new QAction(MainUi);
        act3x3->setObjectName(QString::fromUtf8("act3x3"));
        act3x3->setCheckable(true);
        actLog = new QAction(MainUi);
        actLog->setObjectName(QString::fromUtf8("actLog"));
        actCompress = new QAction(MainUi);
        actCompress->setObjectName(QString::fromUtf8("actCompress"));
        fourPointShotAct = new QAction(MainUi);
        fourPointShotAct->setObjectName(QString::fromUtf8("fourPointShotAct"));
        fourPointShotAct->setEnabled(false);
        pureColor = new QAction(MainUi);
        pureColor->setObjectName(QString::fromUtf8("pureColor"));
        pureColor->setCheckable(true);
        cell = new QAction(MainUi);
        cell->setObjectName(QString::fromUtf8("cell"));
        cell->setCheckable(true);
        stripe = new QAction(MainUi);
        stripe->setObjectName(QString::fromUtf8("stripe"));
        stripe->setCheckable(true);
        action2x2 = new QAction(MainUi);
        action2x2->setObjectName(QString::fromUtf8("action2x2"));
        action2x2->setCheckable(true);
        action3x3 = new QAction(MainUi);
        action3x3->setObjectName(QString::fromUtf8("action3x3"));
        action3x3->setCheckable(true);
        gray = new QAction(MainUi);
        gray->setObjectName(QString::fromUtf8("gray"));
        actiongray = new QAction(MainUi);
        actiongray->setObjectName(QString::fromUtf8("actiongray"));
        imageInversionAct = new QAction(MainUi);
        imageInversionAct->setObjectName(QString::fromUtf8("imageInversionAct"));
        gaussianBlurAct = new QAction(MainUi);
        gaussianBlurAct->setObjectName(QString::fromUtf8("gaussianBlurAct"));
        gaussianNoiseAct = new QAction(MainUi);
        gaussianNoiseAct->setObjectName(QString::fromUtf8("gaussianNoiseAct"));
        imageSegmentationAct = new QAction(MainUi);
        imageSegmentationAct->setObjectName(QString::fromUtf8("imageSegmentationAct"));
        imagePyramidAct = new QAction(MainUi);
        imagePyramidAct->setObjectName(QString::fromUtf8("imagePyramidAct"));
        binaryImageAct = new QAction(MainUi);
        binaryImageAct->setObjectName(QString::fromUtf8("binaryImageAct"));
        outlierDetectionAct = new QAction(MainUi);
        outlierDetectionAct->setObjectName(QString::fromUtf8("outlierDetectionAct"));
        action1 = new QAction(MainUi);
        action1->setObjectName(QString::fromUtf8("action1"));
        logarithmicAct = new QAction(MainUi);
        logarithmicAct->setObjectName(QString::fromUtf8("logarithmicAct"));
        gammaAct = new QAction(MainUi);
        gammaAct->setObjectName(QString::fromUtf8("gammaAct"));
        histogramEqualizationAct = new QAction(MainUi);
        histogramEqualizationAct->setObjectName(QString::fromUtf8("histogramEqualizationAct"));
        smoothSpatialFilterAct = new QAction(MainUi);
        smoothSpatialFilterAct->setObjectName(QString::fromUtf8("smoothSpatialFilterAct"));
        sharpeningSpatialFilterAct = new QAction(MainUi);
        sharpeningSpatialFilterAct->setObjectName(QString::fromUtf8("sharpeningSpatialFilterAct"));
        medianBlurAct = new QAction(MainUi);
        medianBlurAct->setObjectName(QString::fromUtf8("medianBlurAct"));
        sobelAct = new QAction(MainUi);
        sobelAct->setObjectName(QString::fromUtf8("sobelAct"));
        laplacianAct = new QAction(MainUi);
        laplacianAct->setObjectName(QString::fromUtf8("laplacianAct"));
        meanFilterAct = new QAction(MainUi);
        meanFilterAct->setObjectName(QString::fromUtf8("meanFilterAct"));
        statisticalSortingFilterAct = new QAction(MainUi);
        statisticalSortingFilterAct->setObjectName(QString::fromUtf8("statisticalSortingFilterAct"));
        adaptiveFilterAct = new QAction(MainUi);
        adaptiveFilterAct->setObjectName(QString::fromUtf8("adaptiveFilterAct"));
        saltAndPepperNoiseAct = new QAction(MainUi);
        saltAndPepperNoiseAct->setObjectName(QString::fromUtf8("saltAndPepperNoiseAct"));
        grayProcessingAct = new QAction(MainUi);
        grayProcessingAct->setObjectName(QString::fromUtf8("grayProcessingAct"));
        corrosionAct = new QAction(MainUi);
        corrosionAct->setObjectName(QString::fromUtf8("corrosionAct"));
        expansionAct = new QAction(MainUi);
        expansionAct->setObjectName(QString::fromUtf8("expansionAct"));
        openOperationAct = new QAction(MainUi);
        openOperationAct->setObjectName(QString::fromUtf8("openOperationAct"));
        closedOperationAct = new QAction(MainUi);
        closedOperationAct->setObjectName(QString::fromUtf8("closedOperationAct"));
        boundaryExtractionAct = new QAction(MainUi);
        boundaryExtractionAct->setObjectName(QString::fromUtf8("boundaryExtractionAct"));
        holeFillingAct = new QAction(MainUi);
        holeFillingAct->setObjectName(QString::fromUtf8("holeFillingAct"));
        edgeDetectionAct = new QAction(MainUi);
        edgeDetectionAct->setObjectName(QString::fromUtf8("edgeDetectionAct"));
        adaptiveThresholdAct = new QAction(MainUi);
        adaptiveThresholdAct->setObjectName(QString::fromUtf8("adaptiveThresholdAct"));
        watershedAct = new QAction(MainUi);
        watershedAct->setObjectName(QString::fromUtf8("watershedAct"));
        centralWidget = new QWidget(MainUi);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        centralWidget->setAutoFillBackground(false);
        centralWidget->setInputMethodHints(Qt::ImhNone);
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        openImageVerticalLayout = new QVBoxLayout();
        openImageVerticalLayout->setSpacing(6);
        openImageVerticalLayout->setObjectName(QString::fromUtf8("openImageVerticalLayout"));
        openImageButtonHorizontalLayout = new QHBoxLayout();
        openImageButtonHorizontalLayout->setSpacing(6);
        openImageButtonHorizontalLayout->setObjectName(QString::fromUtf8("openImageButtonHorizontalLayout"));
        preImageButton = new QPushButton(centralWidget);
        preImageButton->setObjectName(QString::fromUtf8("preImageButton"));

        openImageButtonHorizontalLayout->addWidget(preImageButton);

        openImageHorizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        openImageButtonHorizontalLayout->addItem(openImageHorizontalSpacer);

        nextImageButton = new QPushButton(centralWidget);
        nextImageButton->setObjectName(QString::fromUtf8("nextImageButton"));

        openImageButtonHorizontalLayout->addWidget(nextImageButton);


        openImageVerticalLayout->addLayout(openImageButtonHorizontalLayout);

        openImageFileScroll = new QScrollArea(centralWidget);
        openImageFileScroll->setObjectName(QString::fromUtf8("openImageFileScroll"));
        openImageFileScroll->setLayoutDirection(Qt::LeftToRight);
        openImageFileScroll->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        openImageFileScroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        openImageFileScroll->setWidgetResizable(true);
        openImageFileScroll->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        openImageFileScrollWidget = new QWidget();
        openImageFileScrollWidget->setObjectName(QString::fromUtf8("openImageFileScrollWidget"));
        openImageFileScrollWidget->setGeometry(QRect(0, 0, 496, 641));
        openImageFileScrollWidget->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_4 = new QHBoxLayout(openImageFileScrollWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        openImageFileLabel = new QLabel(openImageFileScrollWidget);
        openImageFileLabel->setObjectName(QString::fromUtf8("openImageFileLabel"));
        openImageFileLabel->setLayoutDirection(Qt::LeftToRight);
        openImageFileLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(openImageFileLabel);

        openImageFileScroll->setWidget(openImageFileScrollWidget);

        openImageVerticalLayout->addWidget(openImageFileScroll);


        horizontalLayout_5->addLayout(openImageVerticalLayout);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget1 = new QWidget();
        tabWidget1->setObjectName(QString::fromUtf8("tabWidget1"));
        horizontalLayout_2 = new QHBoxLayout(tabWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tabScrollArea1 = new QScrollArea(tabWidget1);
        tabScrollArea1->setObjectName(QString::fromUtf8("tabScrollArea1"));
        tabScrollArea1->setWidgetResizable(true);
        tabInnerWidget1 = new QWidget();
        tabInnerWidget1->setObjectName(QString::fromUtf8("tabInnerWidget1"));
        tabInnerWidget1->setGeometry(QRect(0, 0, 478, 631));
        verticalLayout = new QVBoxLayout(tabInnerWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabLabel1 = new QLabel(tabInnerWidget1);
        tabLabel1->setObjectName(QString::fromUtf8("tabLabel1"));
        tabLabel1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tabLabel1);

        tabScrollArea1->setWidget(tabInnerWidget1);

        horizontalLayout_2->addWidget(tabScrollArea1);

        tabWidget->addTab(tabWidget1, QString());
        tabWidget2 = new QWidget();
        tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
        horizontalLayout_3 = new QHBoxLayout(tabWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tabScrollArea2 = new QScrollArea(tabWidget2);
        tabScrollArea2->setObjectName(QString::fromUtf8("tabScrollArea2"));
        tabScrollArea2->setWidgetResizable(true);
        tabInnerWidget2 = new QWidget();
        tabInnerWidget2->setObjectName(QString::fromUtf8("tabInnerWidget2"));
        tabInnerWidget2->setGeometry(QRect(0, 0, 73, 32));
        verticalLayout_2 = new QVBoxLayout(tabInnerWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabLabel2 = new QLabel(tabInnerWidget2);
        tabLabel2->setObjectName(QString::fromUtf8("tabLabel2"));
        tabLabel2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(tabLabel2);

        tabScrollArea2->setWidget(tabInnerWidget2);

        horizontalLayout_3->addWidget(tabScrollArea2);

        tabWidget->addTab(tabWidget2, QString());
        tabWidget3 = new QWidget();
        tabWidget3->setObjectName(QString::fromUtf8("tabWidget3"));
        tabWidget3->setFocusPolicy(Qt::NoFocus);
        horizontalLayout = new QHBoxLayout(tabWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(tabWidget3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        tabInnerWidget3 = new QWidget();
        tabInnerWidget3->setObjectName(QString::fromUtf8("tabInnerWidget3"));
        tabInnerWidget3->setGeometry(QRect(0, 0, 73, 32));
        verticalLayout_3 = new QVBoxLayout(tabInnerWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabLabel3 = new QLabel(tabInnerWidget3);
        tabLabel3->setObjectName(QString::fromUtf8("tabLabel3"));

        verticalLayout_3->addWidget(tabLabel3);

        scrollArea->setWidget(tabInnerWidget3);

        horizontalLayout->addWidget(scrollArea);

        tabWidget->addTab(tabWidget3, QString());
        tabWidget4 = new QWidget();
        tabWidget4->setObjectName(QString::fromUtf8("tabWidget4"));
        horizontalLayout_6 = new QHBoxLayout(tabWidget4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        scrollArea_2 = new QScrollArea(tabWidget4);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        tabInnerWidget4 = new QWidget();
        tabInnerWidget4->setObjectName(QString::fromUtf8("tabInnerWidget4"));
        tabInnerWidget4->setGeometry(QRect(0, 0, 73, 32));
        verticalLayout_4 = new QVBoxLayout(tabInnerWidget4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabLabel4 = new QLabel(tabInnerWidget4);
        tabLabel4->setObjectName(QString::fromUtf8("tabLabel4"));

        verticalLayout_4->addWidget(tabLabel4);

        scrollArea_2->setWidget(tabInnerWidget4);

        horizontalLayout_6->addWidget(scrollArea_2);

        tabWidget->addTab(tabWidget4, QString());
        tabWidget5 = new QWidget();
        tabWidget5->setObjectName(QString::fromUtf8("tabWidget5"));
        horizontalLayout_7 = new QHBoxLayout(tabWidget5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        scrollArea_3 = new QScrollArea(tabWidget5);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        tabInnerWidget5 = new QWidget();
        tabInnerWidget5->setObjectName(QString::fromUtf8("tabInnerWidget5"));
        tabInnerWidget5->setGeometry(QRect(0, 0, 73, 32));
        verticalLayout_5 = new QVBoxLayout(tabInnerWidget5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(tabInnerWidget5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        scrollArea_3->setWidget(tabInnerWidget5);

        horizontalLayout_7->addWidget(scrollArea_3);

        tabWidget->addTab(tabWidget5, QString());

        horizontalLayout_5->addWidget(tabWidget);

        MainUi->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainUi);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        exampleMenu = new QMenu(menuBar);
        exampleMenu->setObjectName(QString::fromUtf8("exampleMenu"));
        color = new QMenu(exampleMenu);
        color->setObjectName(QString::fromUtf8("color"));
        blur = new QMenu(exampleMenu);
        blur->setObjectName(QString::fromUtf8("blur"));
        noise = new QMenu(exampleMenu);
        noise->setObjectName(QString::fromUtf8("noise"));
        morphology = new QMenu(exampleMenu);
        morphology->setObjectName(QString::fromUtf8("morphology"));
        segmentation = new QMenu(exampleMenu);
        segmentation->setObjectName(QString::fromUtf8("segmentation"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainUi->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainUi);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainUi->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainUi);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainUi->setStatusBar(statusBar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(exampleMenu->menuAction());
        menuBar->addAction(menu->menuAction());
        fileMenu->addAction(openAct);
        fileMenu->addAction(saveAct);
        fileMenu->addAction(setOpenFilePathAct);
        fileMenu->addAction(setSaveFilePathAct);
        fileMenu->addAction(exitAct);
        exampleMenu->addAction(color->menuAction());
        exampleMenu->addAction(blur->menuAction());
        exampleMenu->addAction(noise->menuAction());
        exampleMenu->addAction(morphology->menuAction());
        exampleMenu->addAction(segmentation->menuAction());
        color->addAction(grayProcessingAct);
        color->addAction(imageInversionAct);
        color->addAction(logarithmicAct);
        color->addAction(gammaAct);
        color->addAction(histogramEqualizationAct);
        color->addAction(smoothSpatialFilterAct);
        color->addAction(sharpeningSpatialFilterAct);
        blur->addAction(gaussianBlurAct);
        blur->addAction(medianBlurAct);
        blur->addAction(sobelAct);
        blur->addAction(laplacianAct);
        blur->addAction(meanFilterAct);
        noise->addAction(gaussianNoiseAct);
        noise->addAction(saltAndPepperNoiseAct);
        morphology->addAction(binaryImageAct);
        morphology->addAction(corrosionAct);
        morphology->addAction(expansionAct);
        morphology->addAction(openOperationAct);
        morphology->addAction(closedOperationAct);
        morphology->addAction(boundaryExtractionAct);
        morphology->addAction(holeFillingAct);
        segmentation->addAction(outlierDetectionAct);
        segmentation->addAction(edgeDetectionAct);
        segmentation->addAction(adaptiveThresholdAct);
        segmentation->addAction(watershedAct);
        menu->addAction(action1);

        retranslateUi(MainUi);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainUi);
    } // setupUi

    void retranslateUi(QMainWindow *MainUi)
    {
        MainUi->setWindowTitle(QCoreApplication::translate("MainUi", "ImageOperation", nullptr));
        openAct->setText(QCoreApplication::translate("MainUi", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
#if QT_CONFIG(shortcut)
        openAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        saveAct->setText(QCoreApplication::translate("MainUi", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(shortcut)
        saveAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        printAct->setText(QCoreApplication::translate("MainUi", "\346\211\223\345\215\260", nullptr));
#if QT_CONFIG(shortcut)
        printAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        exitAct->setText(QCoreApplication::translate("MainUi", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(shortcut)
        exitAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        shotAct->setText(QCoreApplication::translate("MainUi", "\346\210\252\345\233\276", nullptr));
#if QT_CONFIG(shortcut)
        shotAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        aboutAct->setText(QCoreApplication::translate("MainUi", "About", nullptr));
        aboutQtAct->setText(QCoreApplication::translate("MainUi", "About Qt", nullptr));
        smallShotImageSizeAct->setText(QCoreApplication::translate("MainUi", "256*256", nullptr));
        midShotImageSizeAct->setText(QCoreApplication::translate("MainUi", "512*512", nullptr));
        bigShotImageSizeAct->setText(QCoreApplication::translate("MainUi", "1024*1024", nullptr));
        autoShotImageSizeAct->setText(QCoreApplication::translate("MainUi", "\350\207\252\345\212\250", nullptr));
        setOpenFilePathAct->setText(QCoreApplication::translate("MainUi", "\350\256\276\347\275\256\350\257\273\345\217\226\346\226\207\344\273\266\345\244\271", nullptr));
        setSaveFilePathAct->setText(QCoreApplication::translate("MainUi", "\350\256\276\347\275\256\344\277\235\345\255\230\346\226\207\344\273\266\345\244\271", nullptr));
        nextImageAct->setText(QCoreApplication::translate("MainUi", "\344\270\213\344\270\200\345\274\240", nullptr));
#if QT_CONFIG(shortcut)
        nextImageAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        preImageAct->setText(QCoreApplication::translate("MainUi", "\345\211\215\344\270\200\345\274\240", nullptr));
#if QT_CONFIG(shortcut)
        preImageAct->setShortcut(QCoreApplication::translate("MainUi", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        personServerSetAct->setText(QCoreApplication::translate("MainUi", "\344\270\252\344\272\272\346\234\215\345\212\241\345\231\250", nullptr));
        merchantServerSetAct->setText(QCoreApplication::translate("MainUi", "\351\235\242\346\226\231\345\225\206\346\234\215\345\212\241\345\231\250", nullptr));
        autoPutDateToPersonServerAct->setText(QCoreApplication::translate("MainUi", "\350\207\252\345\212\250\344\270\212\344\274\240\350\207\263\344\270\252\344\272\272\346\234\215\345\212\241\345\231\250", nullptr));
        autoPutDateToMerchantServerAct->setText(QCoreApplication::translate("MainUi", "\350\207\252\345\212\250\344\270\212\344\274\240\350\207\263\351\235\242\346\226\231\345\225\206\346\234\215\345\212\241\345\231\250", nullptr));
        putSingleFileAct->setText(QCoreApplication::translate("MainUi", "\345\215\225\346\226\207\344\273\266\344\270\212\344\274\240", nullptr));
        putBatchFileAct->setText(QCoreApplication::translate("MainUi", "\346\211\271\351\207\217\344\270\212\344\274\240", nullptr));
        jiaoZhengAct->setText(QCoreApplication::translate("MainUi", "\345\200\276\346\226\234\347\237\253\346\255\243", nullptr));
        actSize3->setText(QCoreApplication::translate("MainUi", "3", nullptr));
        actSize4->setText(QCoreApplication::translate("MainUi", "4", nullptr));
        actSize5->setText(QCoreApplication::translate("MainUi", "5", nullptr));
        actSize6->setText(QCoreApplication::translate("MainUi", "6", nullptr));
        actSize7->setText(QCoreApplication::translate("MainUi", "7", nullptr));
        actSize8->setText(QCoreApplication::translate("MainUi", "8", nullptr));
        recentOpenFilePath_1->setText(QCoreApplication::translate("MainUi", "recentFileActions_1", nullptr));
        recentOpenFilePath_2->setText(QCoreApplication::translate("MainUi", "recentFileActions_2", nullptr));
        recentOpenFilePath_3->setText(QCoreApplication::translate("MainUi", "recentFileActions_3", nullptr));
        OneCmAct->setText(QCoreApplication::translate("MainUi", "\350\256\276\347\275\2561cm\350\267\235\347\246\273", nullptr));
        postAct->setText(QCoreApplication::translate("MainUi", "\344\270\212\344\274\240", nullptr));
        rectAct->setText(QCoreApplication::translate("MainUi", "\350\257\206\345\210\253\347\237\251\345\275\242", nullptr));
        act2x2->setText(QCoreApplication::translate("MainUi", "2x2", nullptr));
        act3x3->setText(QCoreApplication::translate("MainUi", "3x3", nullptr));
        actLog->setText(QCoreApplication::translate("MainUi", "\347\231\273\345\275\225", nullptr));
        actCompress->setText(QCoreApplication::translate("MainUi", "\345\216\213\347\274\251", nullptr));
        fourPointShotAct->setText(QCoreApplication::translate("MainUi", "\345\233\233\347\202\271\346\210\252\345\233\276", nullptr));
        pureColor->setText(QCoreApplication::translate("MainUi", "\347\272\257\350\211\262", nullptr));
        cell->setText(QCoreApplication::translate("MainUi", "\347\275\221\346\240\274", nullptr));
        stripe->setText(QCoreApplication::translate("MainUi", "\346\235\241\347\272\271", nullptr));
        action2x2->setText(QCoreApplication::translate("MainUi", "2x2", nullptr));
        action3x3->setText(QCoreApplication::translate("MainUi", "3x3", nullptr));
        gray->setText(QCoreApplication::translate("MainUi", "huidu", nullptr));
        actiongray->setText(QCoreApplication::translate("MainUi", "gray", nullptr));
        imageInversionAct->setText(QCoreApplication::translate("MainUi", "\345\233\276\345\203\217\345\217\215\350\275\254", nullptr));
        gaussianBlurAct->setText(QCoreApplication::translate("MainUi", "\344\275\216\351\200\232\346\273\244\346\263\242", nullptr));
        gaussianNoiseAct->setText(QCoreApplication::translate("MainUi", "\351\253\230\346\226\257\345\231\252\345\243\260", nullptr));
        imageSegmentationAct->setText(QCoreApplication::translate("MainUi", "\345\233\276\345\203\217\345\210\206\345\211\262", nullptr));
        imagePyramidAct->setText(QCoreApplication::translate("MainUi", "\345\233\276\345\203\217\351\207\221\345\255\227\345\241\224", nullptr));
        binaryImageAct->setText(QCoreApplication::translate("MainUi", "\344\272\214\345\200\274\345\233\276\345\203\217", nullptr));
        outlierDetectionAct->setText(QCoreApplication::translate("MainUi", "\345\255\244\347\253\213\347\202\271\346\243\200\346\265\213", nullptr));
        action1->setText(QCoreApplication::translate("MainUi", "\347\251\272", nullptr));
        logarithmicAct->setText(QCoreApplication::translate("MainUi", "\345\257\271\346\225\260\345\217\230\346\215\242", nullptr));
        gammaAct->setText(QCoreApplication::translate("MainUi", "\344\274\275\351\251\254\345\217\230\346\215\242 ", nullptr));
        histogramEqualizationAct->setText(QCoreApplication::translate("MainUi", "\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", nullptr));
        smoothSpatialFilterAct->setText(QCoreApplication::translate("MainUi", "\345\271\263\346\273\221\347\251\272\351\227\264\346\273\244\346\263\242\345\231\250", nullptr));
        sharpeningSpatialFilterAct->setText(QCoreApplication::translate("MainUi", "\351\224\220\345\214\226\347\251\272\351\227\264\346\273\244\346\263\242\345\231\250", nullptr));
        medianBlurAct->setText(QCoreApplication::translate("MainUi", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        sobelAct->setText(QCoreApplication::translate("MainUi", "\346\226\271\345\220\221\346\273\244\346\263\242", nullptr));
        laplacianAct->setText(QCoreApplication::translate("MainUi", "\346\213\211\346\231\256\346\213\211\346\226\257\345\217\230\346\215\242", nullptr));
        meanFilterAct->setText(QCoreApplication::translate("MainUi", "\345\235\207\345\200\274\346\273\244\346\263\242\345\231\250", nullptr));
        statisticalSortingFilterAct->setText(QCoreApplication::translate("MainUi", "\347\273\237\350\256\241\346\216\222\345\272\217\346\273\244\346\263\242\345\231\250 ", nullptr));
        adaptiveFilterAct->setText(QCoreApplication::translate("MainUi", "\350\207\252\351\200\202\345\272\224\346\273\244\346\263\242\345\231\250", nullptr));
        saltAndPepperNoiseAct->setText(QCoreApplication::translate("MainUi", "\346\244\222\347\233\220\345\231\252\345\243\260", nullptr));
        grayProcessingAct->setText(QCoreApplication::translate("MainUi", "\347\201\260\345\272\246\345\244\204\347\220\206", nullptr));
        corrosionAct->setText(QCoreApplication::translate("MainUi", "\350\205\220\350\232\200", nullptr));
        expansionAct->setText(QCoreApplication::translate("MainUi", "\350\206\250\350\203\200 ", nullptr));
        openOperationAct->setText(QCoreApplication::translate("MainUi", "\345\274\200\346\223\215\344\275\234", nullptr));
        closedOperationAct->setText(QCoreApplication::translate("MainUi", "\351\227\255\346\223\215\344\275\234", nullptr));
        boundaryExtractionAct->setText(QCoreApplication::translate("MainUi", "\350\276\271\347\225\214\346\217\220\345\217\226", nullptr));
        holeFillingAct->setText(QCoreApplication::translate("MainUi", "\347\251\272\346\264\236\345\241\253\345\205\205", nullptr));
        edgeDetectionAct->setText(QCoreApplication::translate("MainUi", "\350\276\271\347\274\230\346\243\200\346\265\213", nullptr));
        adaptiveThresholdAct->setText(QCoreApplication::translate("MainUi", "\350\207\252\351\200\202\345\272\224\351\230\210\345\200\274", nullptr));
        watershedAct->setText(QCoreApplication::translate("MainUi", "\345\210\206\346\260\264\345\262\255", nullptr));
        preImageButton->setText(QCoreApplication::translate("MainUi", "\344\270\212\344\270\200\345\274\240", nullptr));
        nextImageButton->setText(QCoreApplication::translate("MainUi", "\344\270\213\344\270\200\345\274\240", nullptr));
        openImageFileLabel->setText(QString());
        tabLabel1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget1), QCoreApplication::translate("MainUi", "Tab1", nullptr));
        tabLabel2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget2), QCoreApplication::translate("MainUi", "Tab2", nullptr));
        tabLabel3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget3), QCoreApplication::translate("MainUi", "Tab3", nullptr));
        tabLabel4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget4), QCoreApplication::translate("MainUi", "Tab4", nullptr));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget5), QCoreApplication::translate("MainUi", "Tab5", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainUi", "\346\226\207\344\273\266", nullptr));
        exampleMenu->setTitle(QCoreApplication::translate("MainUi", "\347\244\272\344\276\213", nullptr));
        color->setTitle(QCoreApplication::translate("MainUi", "\350\211\262\345\275\251", nullptr));
        blur->setTitle(QCoreApplication::translate("MainUi", "\346\273\244\346\263\242\345\231\250", nullptr));
        noise->setTitle(QCoreApplication::translate("MainUi", "\345\231\252\345\243\260", nullptr));
        morphology->setTitle(QCoreApplication::translate("MainUi", "\345\275\242\346\200\201\345\255\246", nullptr));
        segmentation->setTitle(QCoreApplication::translate("MainUi", "\345\210\206\345\211\262", nullptr));
        menu->setTitle(QCoreApplication::translate("MainUi", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUi: public Ui_MainUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
