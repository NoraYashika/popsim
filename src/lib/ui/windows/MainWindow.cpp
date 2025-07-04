#include "./MainWindow.hpp"
#include <iostream>

#include <QtGui/QCloseEvent>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>

#include "../../fs.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icons8-simulation-48.ico"));

    // connect buttons
    connect(ui->btn_advance_tick        , &QPushButton::clicked  , this, &MainWindow::advanceTick      );
    connect(ui->btn_inspect_world       , &QPushButton::clicked  , this, &MainWindow::inspectWorld     );
    connect(ui->btn_pause_autoadvance   , &QPushButton::clicked  , this, &MainWindow::pauseAutoAdvance );
    connect(ui->btn_population_inspect  , &QPushButton::clicked  , this, &MainWindow::POV_inspect      );
    connect(ui->btn_refresh             , &QPushButton::clicked  , this, &MainWindow::EOV_refresh      );
    connect(ui->btn_settings            , &QPushButton::clicked  , this, &MainWindow::settings         );
    connect(ui->btn_settlements_inspect , &QPushButton::clicked  , this, &MainWindow::SOV_inspect      );
    connect(ui->btn_showDetails         , &QPushButton::clicked  , this, &MainWindow::EOV_showDetails  );

    // Connect actions
    connect(ui->actionSave_Model       , &QAction ::triggered, this, &            MainWindow::savePSWA );
    connect(ui->actionClose_Simulation , &QAction ::triggered, this, [this]{this->close     ();}       );
}

MainWindow::~MainWindow(){
    delete ui;
}

// function definitions
void MainWindow::advanceTick(){
    std::cout << "advance Tick" << std::endl;
}

void MainWindow::inspectWorld(){
    std::cout << "inspect World" << std::endl;
}

void MainWindow::autoAdvance(){
    std::cout << "auto Advance" << std::endl;
}

void MainWindow::pauseAutoAdvance(){
    std::cout << "pause Auto Advance" << std::endl;
}

void MainWindow::settings(){
    std::cout << "settings" << std::endl;
}

void MainWindow::EOV_refresh(){
    std::cout << "event overview refresh" << std::endl;
}

void MainWindow::EOV_showDetails(){
    std::cout << "event overview show Details" << std::endl;
}

void MainWindow::SOV_inspect(){
    std::cout << "settlement overview inspect" << std::endl;
}

void MainWindow::POV_inspect(){
    std::cout << "population overview inspect" << std::endl;
}

void MainWindow::openPSWA(){
    QString filePath = QFileDialog::getOpenFileName(this, "Open World Archive", "", "PopSim World Archive (*.pswa)");
    if (!filePath.isEmpty()){
        fs::path target = getHomePath();
        target.append("/data/temp");
        PSWA::extractArchive(filePath.toStdString(), target);
    }
}

void MainWindow::savePSWA(){

}

void MainWindow::saveasPSWA(){
    QString savePath = QFileDialog::getSaveFileName(this, "Save World Archive", "", "PopSim World Archive (*.pswa)");
    if (!savePath.isEmpty()){
        PSWA::createArchive(getHomePath().append("/data/temp"), savePath.toStdString());
    }
}

void MainWindow::closeEvent(QCloseEvent* event){
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(
        this,
        "Unsaved Changes",
        "You have unsaved changes. Do you want to save before closing",
        QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel
    );

    switch(reply){
        case QMessageBox::Yes: {
                // trigger save dialog
                QString savePath = QFileDialog::getSaveFileName(
                    this,
                    "Save World Archive",
                    "",
                    "PopSim World Archive (*.pswa)"
                );
                if (!savePath.isEmpty()){
                    PSWA::createArchive(getHomePath().append("/data/temp"), savePath.toStdString());
                    event->accept();
                } else {
                    event->ignore(); // Cancelled save dialog
                }
            }
            break;
        case QMessageBox::No:
            event->accept();
            break;
        default:
            event->ignore();
            break;
    };
}