#include "secondpagewidget.h"
#include "ui_secondpagewidget.h"
namespace nsSecondPageWidget {
SecondPageWidget::SecondPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondPageWidget)
{
    ui->setupUi(this);
}

SecondPageWidget::~SecondPageWidget()
{
    delete ui;
}
}
