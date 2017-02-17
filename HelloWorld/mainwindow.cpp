#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    hidden = false;
    connect(ui->pushButton, SIGNAL (released()), this, SLOT (handleButton()));
}

void MainWindow::handleButton()
{
    if(hidden)
    {
        ui->label->show();
    }
    else
    {
        ui->label->hide();
    }

    hidden = !hidden;
}

MainWindow::~MainWindow()
{
    delete ui;
}
