#ifndef SECONDPAGEWIDGET_H
#define SECONDPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class SecondPageWidget;
}

namespace nsSecondPageWidget {
class SecondPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SecondPageWidget(QWidget *parent = 0);
    ~SecondPageWidget();

private:
    Ui::SecondPageWidget *ui;
};
}
#endif // SECONDPAGEWIDGET_H
