#include "guiwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nsGuiWidget::GuiWidget w;
    w.show();

    return a.exec();
}
