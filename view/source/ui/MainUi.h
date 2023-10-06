//
// Created by ASUS on 2023/10/4.
//

#ifndef FETCHTEXTURE_MAINUI_H
#define FETCHTEXTURE_MAINUI_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainUi; }
QT_END_NAMESPACE

class MainUi : public QMainWindow {
Q_OBJECT

public:
    explicit MainUi(QWidget *parent = nullptr);

    ~MainUi() override;

private:
    Ui::MainUi *ui;
};


#endif //FETCHTEXTURE_MAINUI_H
