#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>
#include <QProcess>

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


void MainWindow::on_action_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../MultilingualSupportSoftware/simplify.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../MultilingualSupportSoftware/english.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);
}

void MainWindow::on_actionChinese_Traditional_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../MultilingualSupportSoftware/traditional.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);
}
