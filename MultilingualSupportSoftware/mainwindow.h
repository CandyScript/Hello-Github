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
    void on_action_triggered();

    void on_actionEnglish_triggered();

    void on_actionChinese_Traditional_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
