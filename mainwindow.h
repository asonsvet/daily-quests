#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "quest.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QList<Quest>* quests;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonEasy_clicked();

    void on_buttonMedium_clicked();

    void on_buttonHard_clicked();

    void on_buttonAddQuest_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
