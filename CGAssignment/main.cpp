#include "cgmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CgMainWindow w;
    w.show();

    return a.exec();
}
