#include "guiwidget.h"
#include "ui_guiwidget.h"
#include "tool/helper.h"
#include "firstpage_widget/firstpagewidget.h"
#include "secondpage_widget/secondpagewidget.h"
#include "thirdpage_widget/thirdpagewidget.h"

void nsGuiWidget::GuiWidget::on_pushButtonFirstPage_clicked()
{
    nsHelper::Toolkit<QWidget,GuiWidget::EM_PAGE_BUTTON_EVENT>::closeWidgets(pageWidgetGroup,GuiWidget::emPageMax);
    if(NULL==pageWidgetGroup[GuiWidget::emFirstPage])
    {
        pageWidgetGroup[GuiWidget::emFirstPage]=nsHelper::Toolkit<QWidget,nsFirstPageWidget::FirstPageWidget>::createObject();
    }

    gridLayout->addWidget(pageWidgetGroup[GuiWidget::emFirstPage], 1, 1, 1, 1);
    pageWidgetGroup[GuiWidget::emFirstPage]->show();
}

void nsGuiWidget::GuiWidget::on_pushButtonSecondPage_clicked()
{
    nsHelper::Toolkit<QWidget,GuiWidget::EM_PAGE_BUTTON_EVENT>::closeWidgets(pageWidgetGroup,GuiWidget::emPageMax);
    if(NULL==pageWidgetGroup[GuiWidget::emSecondPage])
    {
        pageWidgetGroup[GuiWidget::emSecondPage]=nsHelper::Toolkit<QWidget,nsSecondPageWidget::SecondPageWidget>::createObject();
    }

    gridLayout->addWidget(pageWidgetGroup[GuiWidget::emSecondPage], 1, 1, 1, 1);
    pageWidgetGroup[GuiWidget::emSecondPage]->show();
}

void nsGuiWidget::GuiWidget::on_pushButtonThirdPage_clicked()
{
    nsHelper::Toolkit<QWidget,GuiWidget::EM_PAGE_BUTTON_EVENT>::closeWidgets(pageWidgetGroup,GuiWidget::emPageMax);
    if(NULL==pageWidgetGroup[GuiWidget::emThirdPage])
    {
        pageWidgetGroup[GuiWidget::emThirdPage]=nsHelper::Toolkit<QWidget,nsThirdPageWidget::ThirdPageWidget>::createObject();
    }

    gridLayout->addWidget(pageWidgetGroup[GuiWidget::emThirdPage], 1, 1, 1, 1);
    pageWidgetGroup[GuiWidget::emThirdPage]->show();
}
