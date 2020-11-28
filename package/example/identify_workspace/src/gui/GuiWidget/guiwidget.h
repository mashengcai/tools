#ifndef GUIWIDGET_H
#define GUIWIDGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QGridLayout>
#include <QPushButton>

namespace Ui {
class GuiWidget;
}

namespace nsGuiWidget {

class GuiWidget : public QWidget
{
    Q_OBJECT

typedef enum{
        emFirstPage=0,
        emSecondPage=1,
        emThirdPage=2,
        emPageMax=3
}EM_PAGE_BUTTON_EVENT;

public:
    explicit GuiWidget(QWidget *parent = 0);
    ~GuiWidget();

private slots:
    void on_btnClose_clicked();
    void on_btnMinimal_clicked();
    void on_btnMaximized_clicked();

    void on_pushButtonFirstPage_clicked();

    void on_pushButtonSecondPage_clicked();

    void on_pushButtonThirdPage_clicked();

private:
    Ui::GuiWidget *ui;
    QGridLayout *gridLayout;
    QWidget  *pageWidgetGroup[emPageMax];
    QPushButton *pagePushButton[emPageMax];
private:
    QPoint relativePos; /*relative position*/
    virtual void paintEvent(QPaintEvent *);
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *envet);
};

}
#endif // GUIWIDGET_H
