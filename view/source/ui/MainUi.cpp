//
// Created by ASUS on 2023/10/4.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainUi.h" resolved

#include "MainUi.h"
#include "ui_MainUi.h"


MainUi::MainUi(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::MainUi) {
    ui->setupUi(this);
}

MainUi::~MainUi() {
    delete ui;
}
