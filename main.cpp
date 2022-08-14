#include "mainwindow.h"
#include "helpers.h"
#include <QApplication>
#include <QFile>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleSheetFile("../Style.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

    MainWindow w;
    w.setWindowTitle("Softlock Task");
    w.show();

    return a.exec();
}
