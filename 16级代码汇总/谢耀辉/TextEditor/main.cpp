#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(application);

    QApplication app(argc, argv);
    MainWindow TextWin;
    TextWin.show();
    return app.exec();
}
