#include "iiivcompare.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IIIvCompare w;
    w.show();

    return a.exec();
}
