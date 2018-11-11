#include <QtCore/QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()  << "Hola Samuel";
    return a.exec();
}
