#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->btnConnect->setText(tr("connect"));
}

Widget::~Widget()
{
    delete ui;
}

