/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDocument;
    QAction *actionTutorial;
    QAction *actionUpdate_Check;
    QAction *actionAbout_Us;
    QAction *actionChinese_Simplify;
    QAction *actionChinese_Tranitional;
    QAction *actionEnglish;
    QAction *actionJapanese;
    QAction *actionOpen;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuLanguage;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QStringLiteral("actionDocument"));
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QStringLiteral("actionTutorial"));
        actionUpdate_Check = new QAction(MainWindow);
        actionUpdate_Check->setObjectName(QStringLiteral("actionUpdate_Check"));
        actionAbout_Us = new QAction(MainWindow);
        actionAbout_Us->setObjectName(QStringLiteral("actionAbout_Us"));
        actionChinese_Simplify = new QAction(MainWindow);
        actionChinese_Simplify->setObjectName(QStringLiteral("actionChinese_Simplify"));
        actionChinese_Tranitional = new QAction(MainWindow);
        actionChinese_Tranitional->setObjectName(QStringLiteral("actionChinese_Tranitional"));
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionJapanese = new QAction(MainWindow);
        actionJapanese->setObjectName(QStringLiteral("actionJapanese"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLanguage = new QMenu(menuHelp);
        menuLanguage->setObjectName(QStringLiteral("menuLanguage"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuHelp->addAction(actionDocument);
        menuHelp->addAction(actionTutorial);
        menuHelp->addSeparator();
        menuHelp->addAction(actionUpdate_Check);
        menuHelp->addAction(actionAbout_Us);
        menuHelp->addAction(menuLanguage->menuAction());
        menuLanguage->addAction(actionChinese_Simplify);
        menuLanguage->addAction(actionChinese_Tranitional);
        menuLanguage->addAction(actionEnglish);
        menuLanguage->addAction(actionJapanese);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionDocument->setText(QApplication::translate("MainWindow", "Document", Q_NULLPTR));
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", Q_NULLPTR));
        actionUpdate_Check->setText(QApplication::translate("MainWindow", "Update Check", Q_NULLPTR));
        actionAbout_Us->setText(QApplication::translate("MainWindow", "About Us", Q_NULLPTR));
        actionChinese_Simplify->setText(QApplication::translate("MainWindow", "Chinese(Simplify)", Q_NULLPTR));
        actionChinese_Tranitional->setText(QApplication::translate("MainWindow", "Chinese(Tranitional)", Q_NULLPTR));
        actionEnglish->setText(QApplication::translate("MainWindow", "English", Q_NULLPTR));
        actionJapanese->setText(QApplication::translate("MainWindow", "Japanese", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuLanguage->setTitle(QApplication::translate("MainWindow", "Language", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
