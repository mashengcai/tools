#include "thirdpagewidget.h"
#include "ui_thirdpagewidget.h"
namespace nsThirdPageWidget {
ThirdPageWidget::ThirdPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdPageWidget)
{
    ui->setupUi(this);
}

ThirdPageWidget::~ThirdPageWidget()
{
    delete ui;
}

}
