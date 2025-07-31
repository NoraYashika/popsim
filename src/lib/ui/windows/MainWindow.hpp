#pragma once

#include <QtGui/QCloseEvent>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QDialog>
#include <memory>
#include <vector>

#include "mainwindow.ui.h"
#include "../../../core/simengine.hpp"
#include "../../../core/event.hpp"

class MainWindow : public QMainWindow {
    Q_OBJECT
    public:
        explicit MainWindow(core::Engine* engine, std::vector<std::unique_ptr<Event>>* event_queue, QWidget *parent = nullptr);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        core::Engine* engine;

    private slots:
        // buttons
        // Simulation control
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

    protected:
        void closeEvent(QCloseEvent* event) override;
};