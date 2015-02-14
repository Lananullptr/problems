#include "asy.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    try {
        QApplication a(argc, argv);
        asy w;
        w.show();

        return a.exec();
    } catch (...) {
        qDebug() << "exception";
    }
}
