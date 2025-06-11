/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Model_File;
    QAction *actionSave_Model;
    QAction *actionClose_Simulation;
    QWidget *centralwidget;
    QGroupBox *group_control_panel;
    QPushButton *btn_advance_tick;
    QPushButton *btn_pause_autoadvance;
    QPushButton *btn_inspect_world;
    QPushButton *btn_settings;
    QTabWidget *inspector;
    QWidget *tab_population;
    QListView *list_population;
    QPushButton *btn_population_inspect;
    QWidget *tab_settlements;
    QListView *list_settlements;
    QPushButton *btn_settlements_inspect;
    QOpenGLWidget *opengl_relations_map;
    QGroupBox *group_events_viewer;
    QPushButton *btn_showDetails;
    QTableWidget *tableWidget;
    QDateEdit *date_currentDate;
    QPushButton *btn_refresh;
    QLabel *dt_label;
    QLineEdit *lineEdit_deltaTime;
    QCheckBox *checkBox_politics;
    QCheckBox *checkBox_disasters;
    QCheckBox *checkBox_social;
    QCheckBox *checkBox_economy;
    QCheckBox *checkBox_military;
    QCheckBox *checkBox_tech;
    QCheckBox *checkBox_cultural;
    QCheckBox *checkBox_misc;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1268, 876);
        actionOpen_Model_File = new QAction(MainWindow);
        actionOpen_Model_File->setObjectName("actionOpen_Model_File");
        actionSave_Model = new QAction(MainWindow);
        actionSave_Model->setObjectName("actionSave_Model");
        actionClose_Simulation = new QAction(MainWindow);
        actionClose_Simulation->setObjectName("actionClose_Simulation");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        group_control_panel = new QGroupBox(centralwidget);
        group_control_panel->setObjectName("group_control_panel");
        group_control_panel->setGeometry(QRect(10, 10, 541, 51));
        btn_advance_tick = new QPushButton(group_control_panel);
        btn_advance_tick->setObjectName("btn_advance_tick");
        btn_advance_tick->setGeometry(QRect(10, 10, 101, 31));
        btn_pause_autoadvance = new QPushButton(group_control_panel);
        btn_pause_autoadvance->setObjectName("btn_pause_autoadvance");
        btn_pause_autoadvance->setGeometry(QRect(120, 10, 131, 31));
        btn_inspect_world = new QPushButton(group_control_panel);
        btn_inspect_world->setObjectName("btn_inspect_world");
        btn_inspect_world->setGeometry(QRect(260, 10, 131, 31));
        btn_settings = new QPushButton(group_control_panel);
        btn_settings->setObjectName("btn_settings");
        btn_settings->setGeometry(QRect(400, 10, 131, 31));
        inspector = new QTabWidget(centralwidget);
        inspector->setObjectName("inspector");
        inspector->setGeometry(QRect(10, 70, 541, 291));
        inspector->setTabPosition(QTabWidget::TabPosition::West);
        inspector->setTabShape(QTabWidget::TabShape::Rounded);
        inspector->setDocumentMode(false);
        inspector->setTabsClosable(false);
        inspector->setMovable(false);
        inspector->setTabBarAutoHide(false);
        tab_population = new QWidget();
        tab_population->setObjectName("tab_population");
        list_population = new QListView(tab_population);
        list_population->setObjectName("list_population");
        list_population->setGeometry(QRect(0, 0, 421, 261));
        btn_population_inspect = new QPushButton(tab_population);
        btn_population_inspect->setObjectName("btn_population_inspect");
        btn_population_inspect->setGeometry(QRect(430, 10, 81, 24));
        inspector->addTab(tab_population, QString());
        tab_settlements = new QWidget();
        tab_settlements->setObjectName("tab_settlements");
        list_settlements = new QListView(tab_settlements);
        list_settlements->setObjectName("list_settlements");
        list_settlements->setGeometry(QRect(0, 0, 421, 261));
        btn_settlements_inspect = new QPushButton(tab_settlements);
        btn_settlements_inspect->setObjectName("btn_settlements_inspect");
        btn_settlements_inspect->setGeometry(QRect(430, 10, 81, 24));
        inspector->addTab(tab_settlements, QString());
        opengl_relations_map = new QOpenGLWidget(centralwidget);
        opengl_relations_map->setObjectName("opengl_relations_map");
        opengl_relations_map->setGeometry(QRect(560, 10, 701, 821));
        group_events_viewer = new QGroupBox(centralwidget);
        group_events_viewer->setObjectName("group_events_viewer");
        group_events_viewer->setGeometry(QRect(10, 370, 541, 461));
        btn_showDetails = new QPushButton(group_events_viewer);
        btn_showDetails->setObjectName("btn_showDetails");
        btn_showDetails->setGeometry(QRect(360, 410, 141, 31));
        tableWidget = new QTableWidget(group_events_viewer);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 50, 331, 401));
        date_currentDate = new QDateEdit(group_events_viewer);
        date_currentDate->setObjectName("date_currentDate");
        date_currentDate->setGeometry(QRect(19, 20, 111, 22));
        date_currentDate->setReadOnly(true);
        btn_refresh = new QPushButton(group_events_viewer);
        btn_refresh->setObjectName("btn_refresh");
        btn_refresh->setGeometry(QRect(360, 370, 141, 31));
        dt_label = new QLabel(group_events_viewer);
        dt_label->setObjectName("dt_label");
        dt_label->setGeometry(QRect(140, 20, 21, 21));
        lineEdit_deltaTime = new QLineEdit(group_events_viewer);
        lineEdit_deltaTime->setObjectName("lineEdit_deltaTime");
        lineEdit_deltaTime->setGeometry(QRect(160, 20, 191, 22));
        lineEdit_deltaTime->setReadOnly(true);
        lineEdit_deltaTime->setCursorMoveStyle(Qt::CursorMoveStyle::VisualMoveStyle);
        lineEdit_deltaTime->setClearButtonEnabled(false);
        checkBox_politics = new QCheckBox(group_events_viewer);
        checkBox_politics->setObjectName("checkBox_politics");
        checkBox_politics->setGeometry(QRect(360, 60, 141, 20));
        checkBox_disasters = new QCheckBox(group_events_viewer);
        checkBox_disasters->setObjectName("checkBox_disasters");
        checkBox_disasters->setGeometry(QRect(360, 80, 141, 20));
        checkBox_social = new QCheckBox(group_events_viewer);
        checkBox_social->setObjectName("checkBox_social");
        checkBox_social->setGeometry(QRect(360, 100, 141, 20));
        checkBox_economy = new QCheckBox(group_events_viewer);
        checkBox_economy->setObjectName("checkBox_economy");
        checkBox_economy->setGeometry(QRect(360, 120, 141, 20));
        checkBox_military = new QCheckBox(group_events_viewer);
        checkBox_military->setObjectName("checkBox_military");
        checkBox_military->setGeometry(QRect(360, 140, 141, 20));
        checkBox_tech = new QCheckBox(group_events_viewer);
        checkBox_tech->setObjectName("checkBox_tech");
        checkBox_tech->setGeometry(QRect(360, 160, 141, 20));
        checkBox_cultural = new QCheckBox(group_events_viewer);
        checkBox_cultural->setObjectName("checkBox_cultural");
        checkBox_cultural->setGeometry(QRect(360, 180, 141, 20));
        checkBox_misc = new QCheckBox(group_events_viewer);
        checkBox_misc->setObjectName("checkBox_misc");
        checkBox_misc->setGeometry(QRect(360, 200, 141, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1268, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_Model_File);
        menuFile->addAction(actionSave_Model);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_Simulation);

        retranslateUi(MainWindow);

        inspector->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Model_File->setText(QCoreApplication::translate("MainWindow", "Open Model File", nullptr));
        actionSave_Model->setText(QCoreApplication::translate("MainWindow", "Save Model", nullptr));
        actionClose_Simulation->setText(QCoreApplication::translate("MainWindow", "Close Simulation", nullptr));
        group_control_panel->setTitle(QString());
        btn_advance_tick->setText(QCoreApplication::translate("MainWindow", "Advance Tick", nullptr));
        btn_pause_autoadvance->setText(QCoreApplication::translate("MainWindow", "Pause/Auto Advance", nullptr));
        btn_inspect_world->setText(QCoreApplication::translate("MainWindow", "Inspect World", nullptr));
        btn_settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        btn_population_inspect->setText(QCoreApplication::translate("MainWindow", "Inspect", nullptr));
        inspector->setTabText(inspector->indexOf(tab_population), QCoreApplication::translate("MainWindow", "Population", nullptr));
        btn_settlements_inspect->setText(QCoreApplication::translate("MainWindow", "Inspect", nullptr));
        inspector->setTabText(inspector->indexOf(tab_settlements), QCoreApplication::translate("MainWindow", "Settlements", nullptr));
        group_events_viewer->setTitle(QString());
        btn_showDetails->setText(QCoreApplication::translate("MainWindow", "Show Details", nullptr));
        btn_refresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        dt_label->setText(QCoreApplication::translate("MainWindow", "\316\224t:", nullptr));
        checkBox_politics->setText(QCoreApplication::translate("MainWindow", "Politics", nullptr));
        checkBox_disasters->setText(QCoreApplication::translate("MainWindow", "Disasters", nullptr));
        checkBox_social->setText(QCoreApplication::translate("MainWindow", "Social", nullptr));
        checkBox_economy->setText(QCoreApplication::translate("MainWindow", "Economy", nullptr));
        checkBox_military->setText(QCoreApplication::translate("MainWindow", "Military", nullptr));
        checkBox_tech->setText(QCoreApplication::translate("MainWindow", "Technology", nullptr));
        checkBox_cultural->setText(QCoreApplication::translate("MainWindow", "Cultural", nullptr));
        checkBox_misc->setText(QCoreApplication::translate("MainWindow", "Misc", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
