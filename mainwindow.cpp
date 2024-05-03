#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    quests = new QList<Quest>;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonEasy_clicked()
{
    ui->buttonEasy->setDown(true);

    ui->buttonMedium->setDown(false);
    ui->buttonHard->setDown(false);
}


void MainWindow::on_buttonMedium_clicked()
{
    ui->buttonMedium->setDown(true);

    ui->buttonEasy->setDown(false);
    ui->buttonHard->setDown(false);
}


void MainWindow::on_buttonHard_clicked()
{
    ui->buttonHard->setDown(true);

    ui->buttonEasy->setDown(false);
    ui->buttonMedium->setDown(false);
}


void MainWindow::on_buttonAddQuest_clicked()
{
    if (ui->lineTask->text() != ""/*ui->buttonEasy->isDown() || ui->buttonMedium->isDown() || ui->buttonHard->isDown()*/)
    {
        Quest q;
        q.setTask(ui->lineTask->text());
        ui->lineTask->clear();
        if (ui->buttonEasy->isDown())
        {
            q.setModeEasy();
        }
        else if (ui->buttonMedium->isDown())
        {
            q.setModeMedium();
        }
        else q.setModeHard();
        quests->append(q);

        ui->listQuests->addItem(q.getTask());

    }
}

