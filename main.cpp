#include <QApplication>
#include "view/slot/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow window;
    window.show();

    return QApplication::exec();
}
