#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "map.h"
#include "settings.h"
#include "game.h"

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QWidget*        cWidget;
    QHBoxLayout*    cLayout;

    QWidget*        mainWidget;
    QGridLayout*    mainLayout;

    Map*            map;
    Settings*       settingsWidget;

    QHBoxLayout*    buttonsLayout;
    QPushButton*    start; // Манипуляции с итерациями мира
    QPushButton*    next;
    QPushButton*    prev;
    QPushButton*    first;
    QPushButton*    clear;
    QPushButton*    settings;

    Game*           game; // Логика игры

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void settingsRequest();

private slots:
    void openSettings();
    void closeSettings();
    void switchStartButtonTextByGameCondition(Game::GameCondition condition);
};

#endif // MAINWINDOW_H
