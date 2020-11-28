#ifndef THIRDPAGEWIDGET_H
#define THIRDPAGEWIDGET_H

#include <QWidget>

namespace Ui {
class ThirdPageWidget;
}

namespace nsThirdPageWidget {
class ThirdPageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ThirdPageWidget(QWidget *parent = 0);
    ~ThirdPageWidget();

private:
    Ui::ThirdPageWidget *ui;
};
}
#endif // THIRDPAGEWIDGET_H
