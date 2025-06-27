#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QDialog>
#include "mainwindow.ui.h"

class MainWindow : public QMainWindow {
    Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;

    private slots:
        // buttons
        // Simulation control
        void advanceTick();
        void inspectWorld();
        void autoAdvance();
        void pauseAutoAdvance();
        void settings();
        
        // EOV => Event OverView
        void EOV_refresh();
        void EOV_showDetails();
        
        // SOV => Settlement OverView
        void SOV_inspect();

        // POV => Population OverView
        void POV_inspect();

        // File operations
        void openPSWA();
        void savePSWA();
        void saveasPSWA();

};