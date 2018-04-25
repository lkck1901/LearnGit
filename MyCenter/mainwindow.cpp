#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QMdiSubWindow>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_File_triggered()
{
   QTextEdit  *text = new QTextEdit(ui->mdiArea);
   QMdiSubWindow *sub = ui->mdiArea->addSubWindow(text);
   sub->setWindowTitle(tr("多文档编辑器"));
   sub->show();
}
