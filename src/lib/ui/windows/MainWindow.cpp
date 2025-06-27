#include "./MainWindow.hpp"
#include <iostream>

#include <QtWidgets/QFileDialog>

#include "../../fs.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    // Example: connect a button click
    // connect(ui->myButton, &QPushButton::clicked, this, &MainWindow::someSlot);
    connect(ui->btn_advance_tick       , &QPushButton::clicked, this, &MainWindow::advanceTick     );
    connect(ui->btn_inspect_world      , &QPushButton::clicked, this, &MainWindow::inspectWorld    );
    connect(ui->btn_pause_autoadvance  , &QPushButton::clicked, this, &MainWindow::pauseAutoAdvance);
    connect(ui->btn_population_inspect , &QPushButton::clicked, this, &MainWindow::POV_inspect     );
    connect(ui->btn_refresh            , &QPushButton::clicked, this, &MainWindow::EOV_refresh     );
    connect(ui->btn_settings           , &QPushButton::clicked, this, &MainWindow::settings        );
    connect(ui->btn_settlements_inspect, &QPushButton::clicked, this, &MainWindow::SOV_inspect     );
    connect(ui->btn_showDetails        , &QPushButton::clicked, this, &MainWindow::EOV_showDetails );
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
        target.append("")
        PSWA::extractArchive(filePath.toStdString(), );
    }
}

void MainWindow::savePSWA(){

}

void MainWindow::saveasPSWA(){

}