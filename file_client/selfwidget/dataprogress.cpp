#include "dataprogress.h"
#include "ui_dataprogress.h"

DataProgress::DataProgress(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataProgress)
{
    ui->setupUi(this);
}

DataProgress::~DataProgress()
{
    delete ui;
}

//设置文件名字
void DataProgress::setFileName(QString name)
{
    ui->label->setText(name + " : ");
    ui->progressBar->setMinimum(0); //最小值
    ui->progressBar->setValue(0);
}

//设置进度条的当前值value, 最大值max
void DataProgress::setProgress(int value, int max)
{
    ui->progressBar->setValue(value);
    ui->progressBar->setMaximum(max);
}
