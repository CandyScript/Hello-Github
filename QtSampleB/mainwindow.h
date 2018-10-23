#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionDocument_triggered();

    void on_actionChinese_Simplify_triggered();

    void on_actionChinese_Tranitional_triggered();

    void on_actionEnglish_triggered();

    void on_actionJapanese_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
