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
    QAction *fourierTransformSpectrogramAct;
    QAction *gaussianNoiseAct;
    QAction *grayscaleProcessingAct;
    QAction *imagePyramidAct;
    QAction *binaryImageAct;
    QAction *outlierDetectionAct;
    QAction *action1;
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
    QLabel *stitchTextureLabel;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *exampleMenu;
    QMenu *grayscaleTransformation;
    QMenu *frequencyDomainFiltering;
    QMenu *restorationAndReconstruction;
    QMenu *colorProcessing;
    QMenu *multiResolutionProcessing;
    QMenu *morphology;
    QMenu *imageSegmentation;
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
        MainUi->setStyleSheet(QString::fromUtf8("/***********Menu**************/\n"
"QMenu {\n"
"	border-image:url(D:/workspace/C/clothTexture/clothTexture/config/qss/style/images/5.png);\n"
"	border:1px solid gray;\n"
"	border-radius:3px;\n"
"	min-width:60px;\n"
"}\n"
"\n"
"QMenu::item {   \n"
"    min-width:60px;\n"
"    height:25px;\n"
"    padding: 2px 25px 2px 30px;\n"
"    margin-left: 5px;\n"
"    /* color:#858E94; */\n"
"    color:black\n"
" }\n"
"\n"
"QMenu::item:selected {  \n"
"    border-width:1px;\n"
"    border-color: #516589;\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                             stop: 0\n"
"                             rgb(45,133,207),\n"
"                             stop: 1.0 rgb(125,195,250));\n"
"    color:#E6FFFF;\n"
"}\n"
"QMenu::item:disabled {   \n"
"    color:gray;\n"
"}\n"
"\n"
"/***********QWidget**************/\n"
"QWidget\n"
"{\n"
"	background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #D8D9DE,stop:1 #C8C8D0);\n"
"}\n"
"\n"
"/***********QScrollBar**************/\n"
"QScrollBar:"
                        "horizontal {\n"
"    border: 1px solid #222222;\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #ffffff, stop: 0.5 #ffffff, stop: 1 #ffffff);\n"
"    height: 7px;\n"
"    margin: 0px 16px 0 16px;\n"
"}\n"
" \n"
"QScrollBar::handle:horizontal\n"
"{\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #b1b1b1, stop: 0.5 #b3b3b3, stop: 1 #b1b1b1);\n"
"    min-height: 20px;\n"
"    border-radius: 2px;\n"
"}\n"
" \n"
"QScrollBar::add-line:horizontal {\n"
"    border: 1px solid #1b1b19;\n"
"    border-radius: 2px;\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #999999, stop: 1 #999999);\n"
"    width: 14px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:horizontal {\n"
"    border: 1px solid #1b1b19;\n"
"    border-radius: 2px;\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #999999, stop: 1 #999999);\n"
"    width: 14px;\n"
"    subcontrol-position: left;\n"
""
                        "    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"    border: 1px solid black;\n"
"    width: 1px;\n"
"    height: 1px;\n"
"    background: white;\n"
"}\n"
" \n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"}\n"
" \n"
"QScrollBar:vertical\n"
"{\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #ffffff, stop: 0.5 #ffffff, stop: 1 #ffffff);\n"
"    width: 7px;\n"
"    margin: 16px 0 16px 0;\n"
"    border: 1px solid #222222;\n"
"}\n"
" \n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #b1b1b1, stop: 0.5 #b3b3b3, stop: 1 #b1b1b1);\n"
"    min-height: 20px;\n"
"    border-radius: 2px;\n"
"}\n"
" \n"
"QScrollBar::add-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    border-radius: 2px;\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: 1 #999999);\n"
""
                        "    height: 14px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"    border: 1px solid #1b1b19;\n"
"    border-radius: 2px;\n"
"    background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #999999, stop: 1 #999999);\n"
"    height: 14px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
" \n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"    border: 1px solid black;\n"
"    width: 1px;\n"
"    height: 1px;\n"
"    background: white;\n"
"}\n"
" \n"
" \n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"}\n"
"\n"
"/***********QTabWidget**************/\n"
"QTabBar::tab {\n"
"    color: #ffffff;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #999999;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-rig"
                        "ht: -1px;\n"
"}\n"
"\n"
" \n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
" \n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; \n"
"    border-top-right-radius: 3px;\n"
"}\n"
" \n"
"QTabBar::tab:first:!selected\n"
"{\n"
"    margin-left: 0px; \n"
"    border-top-left-radius: 3px;\n"
"}\n"
" \n"
"QTabBar::tab:!selected\n"
"{\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #737373);\n"
"}\n"
" \n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
" \n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #737373, stop:0.2 #999999, stop:0.1 #b1b1b1);\n"
"}"));
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
        fourierTransformSpectrogramAct = new QAction(MainUi);
        fourierTransformSpectrogramAct->setObjectName(QString::fromUtf8("fourierTransformSpectrogramAct"));
        gaussianNoiseAct = new QAction(MainUi);
        gaussianNoiseAct->setObjectName(QString::fromUtf8("gaussianNoiseAct"));
        grayscaleProcessingAct = new QAction(MainUi);
        grayscaleProcessingAct->setObjectName(QString::fromUtf8("grayscaleProcessingAct"));
        imagePyramidAct = new QAction(MainUi);
        imagePyramidAct->setObjectName(QString::fromUtf8("imagePyramidAct"));
        binaryImageAct = new QAction(MainUi);
        binaryImageAct->setObjectName(QString::fromUtf8("binaryImageAct"));
        outlierDetectionAct = new QAction(MainUi);
        outlierDetectionAct->setObjectName(QString::fromUtf8("outlierDetectionAct"));
        action1 = new QAction(MainUi);
        action1->setObjectName(QString::fromUtf8("action1"));
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
        tabInnerWidget2->setGeometry(QRect(0, 0, 478, 631));
        verticalLayout_2 = new QVBoxLayout(tabInnerWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stitchTextureLabel = new QLabel(tabInnerWidget2);
        stitchTextureLabel->setObjectName(QString::fromUtf8("stitchTextureLabel"));
        stitchTextureLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(stitchTextureLabel);

        tabScrollArea2->setWidget(tabInnerWidget2);

        horizontalLayout_3->addWidget(tabScrollArea2);

        tabWidget->addTab(tabWidget2, QString());

        horizontalLayout_5->addWidget(tabWidget);

        MainUi->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainUi);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 22));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        exampleMenu = new QMenu(menuBar);
        exampleMenu->setObjectName(QString::fromUtf8("exampleMenu"));
        grayscaleTransformation = new QMenu(exampleMenu);
        grayscaleTransformation->setObjectName(QString::fromUtf8("grayscaleTransformation"));
        frequencyDomainFiltering = new QMenu(exampleMenu);
        frequencyDomainFiltering->setObjectName(QString::fromUtf8("frequencyDomainFiltering"));
        restorationAndReconstruction = new QMenu(exampleMenu);
        restorationAndReconstruction->setObjectName(QString::fromUtf8("restorationAndReconstruction"));
        colorProcessing = new QMenu(exampleMenu);
        colorProcessing->setObjectName(QString::fromUtf8("colorProcessing"));
        multiResolutionProcessing = new QMenu(exampleMenu);
        multiResolutionProcessing->setObjectName(QString::fromUtf8("multiResolutionProcessing"));
        morphology = new QMenu(exampleMenu);
        morphology->setObjectName(QString::fromUtf8("morphology"));
        imageSegmentation = new QMenu(exampleMenu);
        imageSegmentation->setObjectName(QString::fromUtf8("imageSegmentation"));
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
        exampleMenu->addAction(grayscaleTransformation->menuAction());
        exampleMenu->addAction(frequencyDomainFiltering->menuAction());
        exampleMenu->addAction(restorationAndReconstruction->menuAction());
        exampleMenu->addAction(colorProcessing->menuAction());
        exampleMenu->addAction(multiResolutionProcessing->menuAction());
        exampleMenu->addAction(morphology->menuAction());
        exampleMenu->addAction(imageSegmentation->menuAction());
        grayscaleTransformation->addAction(imageInversionAct);
        frequencyDomainFiltering->addAction(fourierTransformSpectrogramAct);
        restorationAndReconstruction->addAction(gaussianNoiseAct);
        colorProcessing->addAction(grayscaleProcessingAct);
        multiResolutionProcessing->addAction(imagePyramidAct);
        morphology->addAction(binaryImageAct);
        imageSegmentation->addAction(outlierDetectionAct);
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
        fourierTransformSpectrogramAct->setText(QCoreApplication::translate("MainUi", "\345\202\205\351\207\214\345\217\266\345\217\230\346\215\242\351\242\221\350\260\261\345\233\276", nullptr));
        gaussianNoiseAct->setText(QCoreApplication::translate("MainUi", "\351\253\230\346\226\257\345\231\252\345\243\260", nullptr));
        grayscaleProcessingAct->setText(QCoreApplication::translate("MainUi", "\347\201\260\345\272\246\345\244\204\347\220\206 ", nullptr));
        imagePyramidAct->setText(QCoreApplication::translate("MainUi", "\345\233\276\345\203\217\351\207\221\345\255\227\345\241\224", nullptr));
        binaryImageAct->setText(QCoreApplication::translate("MainUi", "\344\272\214\345\200\274\345\233\276\345\203\217", nullptr));
        outlierDetectionAct->setText(QCoreApplication::translate("MainUi", "\345\255\244\347\253\213\347\202\271\346\243\200\346\265\213", nullptr));
        action1->setText(QCoreApplication::translate("MainUi", "\347\251\272", nullptr));
        preImageButton->setText(QCoreApplication::translate("MainUi", "\344\270\212\344\270\200\345\274\240", nullptr));
        nextImageButton->setText(QCoreApplication::translate("MainUi", "\344\270\213\344\270\200\345\274\240", nullptr));
        openImageFileLabel->setText(QString());
        tabLabel1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget1), QCoreApplication::translate("MainUi", "Tab1", nullptr));
        stitchTextureLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidget2), QCoreApplication::translate("MainUi", "Tab2", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainUi", "\346\226\207\344\273\266", nullptr));
        exampleMenu->setTitle(QCoreApplication::translate("MainUi", "\347\244\272\344\276\213", nullptr));
        grayscaleTransformation->setTitle(QCoreApplication::translate("MainUi", "\347\201\260\345\272\246\345\217\230\346\215\242", nullptr));
        frequencyDomainFiltering->setTitle(QCoreApplication::translate("MainUi", "\351\242\221\347\216\207\345\237\237\346\273\244\346\263\242", nullptr));
        restorationAndReconstruction->setTitle(QCoreApplication::translate("MainUi", "\345\244\215\345\216\237\344\270\216\351\207\215\345\273\272", nullptr));
        colorProcessing->setTitle(QCoreApplication::translate("MainUi", "\345\275\251\350\211\262\345\244\204\347\220\206", nullptr));
        multiResolutionProcessing->setTitle(QCoreApplication::translate("MainUi", "\345\260\217\346\263\242\345\222\214\345\244\232\345\210\206\350\276\250\347\216\207\345\244\204\347\220\206", nullptr));
        morphology->setTitle(QCoreApplication::translate("MainUi", "\345\275\242\346\200\201\345\255\246", nullptr));
        imageSegmentation->setTitle(QCoreApplication::translate("MainUi", "\345\233\276\345\203\217\345\210\206\345\211\262", nullptr));
        menu->setTitle(QCoreApplication::translate("MainUi", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUi: public Ui_MainUi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
