#include "firstpagewidget.h"
#include "ui_firstpagewidget.h"
namespace nsFirstPageWidget {
FirstPageWidget::FirstPageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstPageWidget)
{
    ui->setupUi(this);
}

FirstPageWidget::~FirstPageWidget()
{
    delete ui;
}
}
