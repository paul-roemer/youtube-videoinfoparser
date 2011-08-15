#include <QtCore/QCoreApplication>

#include <QtCore>
#include "videoinfoparser.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Starting Http-Request";

    VideoInfoParser parser("Test");

    return a.exec();
}
