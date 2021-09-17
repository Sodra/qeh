#include "Viewer.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (argc < 2) {
        qWarning() << "Pass an image";
        return 1;
    }
    Viewer w(argv[1]);
    if (!w.isValid()) {
        qWarning() << "Failed to open" << argv[1];
        return 1;
    }
    w.show();
    return a.exec();
}
