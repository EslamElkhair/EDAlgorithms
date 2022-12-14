#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleSheetFile("/home/eslamelkhair/Desktop/EDAlgorithms/Style.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

    MainWindow w;
    w.setWindowTitle("Softlock Task");
    w.show();

    return a.exec();
}
