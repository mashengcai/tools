#ifndef FIRSTPAGEWIDGET_H
#define FIRSTPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class FirstPageWidget;
}

namespace nsFirstPageWidget {

class FirstPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FirstPageWidget(QWidget *parent = 0);
    ~FirstPageWidget();

private:
    Ui::FirstPageWidget *ui;
};

}

#endif // FIRSTPAGEWIDGET_H
