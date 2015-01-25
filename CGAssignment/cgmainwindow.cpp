#include "cgmainwindow.h"
#include "ui_cgmainwindow.h"

CgMainWindow::CgMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CgMainWindow)
{
    ui->setupUi(this);
}

CgMainWindow::~CgMainWindow()
{
    delete ui;
}
