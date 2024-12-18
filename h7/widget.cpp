#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // tekstit
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
    ui->txtResult->setReadOnly(true);

    // lisätty disconnect, ilman niitä yksi painallus lisäsi 2 yksikköä counteriin
    // nyt oikein 1 painallus = +1 counter
    disconnect(ui->btnCount, nullptr, this, nullptr);
    disconnect(ui->btnReset, nullptr, this, nullptr);

    // signaalit
    connect(ui->btnCount, &QPushButton::clicked, this, &Widget::on_btnCount_clicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &Widget::on_btnReset_clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCount_clicked()
{
    ++count;
    QString counting = QString::number(count);
    ui->txtResult->setText(counting);
    ui->labelInfo->setText("Painiketta painettu " + counting + " kertaa");
}

void Widget::on_btnReset_clicked()
{
    count = 0;
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}

