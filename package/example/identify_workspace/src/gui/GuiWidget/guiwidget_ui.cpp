#include "guiwidget.h"
#include "ui_guiwidget.h"
#include "tool/helper.h"
#include <QDesktopWidget>
#include <QPainter>
namespace nsGuiWidget {
GuiWidget::GuiWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GuiWidget)
{
    ui->setupUi(this);

    setWindowFlags(Qt::FramelessWindowHint);
    setWindowIcon(QIcon(":/icon/config/img/icon.png"));
    setWindowTitle(QString::fromUtf8("AI系统"));

    QDesktopWidget* desktop = QApplication::desktop();
    int desktopWidth=desktop->width() ;
    int desktopHeight=desktop->height();
    move((desktopWidth - this->width())/2, (desktopHeight - this->height())/2);

    gridLayout = new QGridLayout(ui->BodyWidget);
    gridLayout->setSpacing(0);
    gridLayout->setContentsMargins(1,1,1,1);

    pagePushButton[GuiWidget::emFirstPage]=ui->pushButtonFirstPage;
    pagePushButton[GuiWidget::emSecondPage]=ui->pushButtonSecondPage;
    pagePushButton[GuiWidget::emThirdPage]=ui->pushButtonThirdPage;
    nsHelper::Toolkit<QWidget,GuiWidget::EM_PAGE_BUTTON_EVENT>::initNULL(pageWidgetGroup,GuiWidget::emPageMax);
}

GuiWidget::~GuiWidget()
{
    nsHelper::Toolkit<QWidget,GuiWidget::EM_PAGE_BUTTON_EVENT>::destroyObjs(pageWidgetGroup,GuiWidget::emPageMax);
    delete gridLayout;

    delete ui;
}

void GuiWidget::on_btnClose_clicked()
{
    this->close();
}

void GuiWidget::on_btnMinimal_clicked()
{
    this->showMinimized();
}

/**
 * @brief 如果你是用QWidget做的主窗体，请需要重构paintEvent事件;否则顶层QWidget窗口，不会显示图片.
 */
void GuiWidget::paintEvent(QPaintEvent *)
{
    QStyleOption option;
    option.init(this);
    QPainter painter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &option, &painter, this);
}



void GuiWidget::mousePressEvent(QMouseEvent *event)
{
    relativePos=this->pos()-event->globalPos();
}
void GuiWidget::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()+ relativePos);
}

void GuiWidget::on_btnMaximized_clicked()
{
    if(this->isMaximized())
    {
        this->showNormal();
        return;
    }

    this->showMaximized();

}

}
