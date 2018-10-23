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


void MainWindow::on_actionChinese_Simplify_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../QtSampleB/simplify.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);

}

void MainWindow::on_actionChinese_Tranitional_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../QtSampleB/traditional.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);
}

void MainWindow::on_actionEnglish_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../QtSampleB/english.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);
}

void MainWindow::on_actionJapanese_triggered()
{
    QTranslator *translator=new QTranslator;
        translator->load("../QtSampleB/japanese.qm");
        qApp->installTranslator(translator);
        ui->retranslateUi(this);
}
