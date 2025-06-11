/********************************************************************************
** Form generated from reading UI file 'newWorld.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NEWWORLD_H
#define NEWWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDateEdit *dateEdit_simStart;
    QDateEdit *dateEdit_simEnd;
    QLineEdit *lineEdit_worldName;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBox_initialPopulation;
    QLabel *label_5;
    QSpinBox *spinBox_initialAmountSettlements;
    QLabel *label_7;
    QSpinBox *spinBox_populationCap;
    QLabel *label_8;
    QComboBox *comboBox_deltaTime;
    QLabel *label_6;
    QSpinBox *spinBox_avgLifeExpectancy;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_fertilityRate;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_mortalityRate;
    QLabel *label_11;
    QSpinBox *spinBox_settlementCap;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_settlementGrowthRate;
    QComboBox *comboBox_settlementDistributionType;
    QFrame *line;
    QLabel *label_14;
    QComboBox *comboBox_livingConditions;
    QLabel *label_15;
    QComboBox *comboBox_educationLevel;
    QLabel *label_16;
    QComboBox *comboBox_techAdvancementStart;
    QLabel *label_17;
    QComboBox *comboBox_economicSystem;
    QCheckBox *checkBox_migration;
    QLabel *label_18;
    QSpinBox *spinBox_crime_conflictRate;
    QLabel *label_19;
    QSpinBox *spinBox_initialCulturesCount;
    QLabel *label_20;
    QComboBox *comboBox_religiousDistribution;
    QLabel *label_21;
    QLineEdit *lineEdit_seed;
    QLabel *label_22;
    QComboBox *comboBox_climateBias;
    QLabel *label_23;
    QComboBox *comboBox_terrainComplexity;
    QLabel *label_24;
    QComboBox *comboBox_naturalDisasterFrequency;
    QPushButton *btn_confirm;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(801, 390);
        dateEdit_simStart = new QDateEdit(Dialog);
        dateEdit_simStart->setObjectName("dateEdit_simStart");
        dateEdit_simStart->setGeometry(QRect(110, 50, 150, 22));
        dateEdit_simEnd = new QDateEdit(Dialog);
        dateEdit_simEnd->setObjectName("dateEdit_simEnd");
        dateEdit_simEnd->setGeometry(QRect(110, 80, 150, 22));
        lineEdit_worldName = new QLineEdit(Dialog);
        lineEdit_worldName->setObjectName("lineEdit_worldName");
        lineEdit_worldName->setGeometry(QRect(110, 20, 150, 22));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 90, 22));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 90, 22));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 90, 22));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 50, 90, 22));
        spinBox_initialPopulation = new QSpinBox(Dialog);
        spinBox_initialPopulation->setObjectName("spinBox_initialPopulation");
        spinBox_initialPopulation->setGeometry(QRect(370, 20, 150, 22));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(540, 50, 90, 22));
        spinBox_initialAmountSettlements = new QSpinBox(Dialog);
        spinBox_initialAmountSettlements->setObjectName("spinBox_initialAmountSettlements");
        spinBox_initialAmountSettlements->setGeometry(QRect(630, 20, 150, 22));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 20, 90, 22));
        spinBox_populationCap = new QSpinBox(Dialog);
        spinBox_populationCap->setObjectName("spinBox_populationCap");
        spinBox_populationCap->setGeometry(QRect(370, 50, 150, 22));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 110, 90, 22));
        comboBox_deltaTime = new QComboBox(Dialog);
        comboBox_deltaTime->addItem(QString());
        comboBox_deltaTime->addItem(QString());
        comboBox_deltaTime->addItem(QString());
        comboBox_deltaTime->addItem(QString());
        comboBox_deltaTime->addItem(QString());
        comboBox_deltaTime->addItem(QString());
        comboBox_deltaTime->setObjectName("comboBox_deltaTime");
        comboBox_deltaTime->setGeometry(QRect(110, 110, 150, 22));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 80, 90, 22));
        spinBox_avgLifeExpectancy = new QSpinBox(Dialog);
        spinBox_avgLifeExpectancy->setObjectName("spinBox_avgLifeExpectancy");
        spinBox_avgLifeExpectancy->setGeometry(QRect(370, 80, 150, 22));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(280, 110, 90, 22));
        doubleSpinBox_fertilityRate = new QDoubleSpinBox(Dialog);
        doubleSpinBox_fertilityRate->setObjectName("doubleSpinBox_fertilityRate");
        doubleSpinBox_fertilityRate->setGeometry(QRect(370, 110, 150, 22));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(280, 140, 90, 22));
        doubleSpinBox_mortalityRate = new QDoubleSpinBox(Dialog);
        doubleSpinBox_mortalityRate->setObjectName("doubleSpinBox_mortalityRate");
        doubleSpinBox_mortalityRate->setGeometry(QRect(370, 140, 150, 22));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(540, 20, 90, 22));
        spinBox_settlementCap = new QSpinBox(Dialog);
        spinBox_settlementCap->setObjectName("spinBox_settlementCap");
        spinBox_settlementCap->setGeometry(QRect(630, 50, 151, 22));
        label_12 = new QLabel(Dialog);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(540, 80, 90, 22));
        label_13 = new QLabel(Dialog);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(540, 110, 90, 22));
        comboBox_settlementGrowthRate = new QComboBox(Dialog);
        comboBox_settlementGrowthRate->addItem(QString());
        comboBox_settlementGrowthRate->addItem(QString());
        comboBox_settlementGrowthRate->addItem(QString());
        comboBox_settlementGrowthRate->setObjectName("comboBox_settlementGrowthRate");
        comboBox_settlementGrowthRate->setGeometry(QRect(630, 80, 150, 22));
        comboBox_settlementDistributionType = new QComboBox(Dialog);
        comboBox_settlementDistributionType->addItem(QString());
        comboBox_settlementDistributionType->addItem(QString());
        comboBox_settlementDistributionType->addItem(QString());
        comboBox_settlementDistributionType->setObjectName("comboBox_settlementDistributionType");
        comboBox_settlementDistributionType->setGeometry(QRect(630, 110, 150, 22));
        line = new QFrame(Dialog);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 170, 761, 22));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_14 = new QLabel(Dialog);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 200, 90, 22));
        comboBox_livingConditions = new QComboBox(Dialog);
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->addItem(QString());
        comboBox_livingConditions->setObjectName("comboBox_livingConditions");
        comboBox_livingConditions->setGeometry(QRect(110, 200, 150, 22));
        label_15 = new QLabel(Dialog);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 230, 90, 22));
        comboBox_educationLevel = new QComboBox(Dialog);
        comboBox_educationLevel->addItem(QString());
        comboBox_educationLevel->addItem(QString());
        comboBox_educationLevel->addItem(QString());
        comboBox_educationLevel->setObjectName("comboBox_educationLevel");
        comboBox_educationLevel->setGeometry(QRect(110, 230, 150, 22));
        label_16 = new QLabel(Dialog);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 260, 90, 22));
        comboBox_techAdvancementStart = new QComboBox(Dialog);
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->addItem(QString());
        comboBox_techAdvancementStart->setObjectName("comboBox_techAdvancementStart");
        comboBox_techAdvancementStart->setGeometry(QRect(110, 260, 150, 22));
        label_17 = new QLabel(Dialog);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 290, 90, 22));
        comboBox_economicSystem = new QComboBox(Dialog);
        comboBox_economicSystem->addItem(QString());
        comboBox_economicSystem->addItem(QString());
        comboBox_economicSystem->addItem(QString());
        comboBox_economicSystem->setObjectName("comboBox_economicSystem");
        comboBox_economicSystem->setGeometry(QRect(110, 290, 150, 22));
        checkBox_migration = new QCheckBox(Dialog);
        checkBox_migration->setObjectName("checkBox_migration");
        checkBox_migration->setGeometry(QRect(370, 200, 150, 22));
        label_18 = new QLabel(Dialog);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(280, 230, 90, 22));
        spinBox_crime_conflictRate = new QSpinBox(Dialog);
        spinBox_crime_conflictRate->setObjectName("spinBox_crime_conflictRate");
        spinBox_crime_conflictRate->setGeometry(QRect(370, 230, 150, 22));
        label_19 = new QLabel(Dialog);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(280, 260, 90, 22));
        spinBox_initialCulturesCount = new QSpinBox(Dialog);
        spinBox_initialCulturesCount->setObjectName("spinBox_initialCulturesCount");
        spinBox_initialCulturesCount->setGeometry(QRect(370, 260, 150, 22));
        label_20 = new QLabel(Dialog);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(280, 290, 90, 22));
        comboBox_religiousDistribution = new QComboBox(Dialog);
        comboBox_religiousDistribution->addItem(QString());
        comboBox_religiousDistribution->addItem(QString());
        comboBox_religiousDistribution->addItem(QString());
        comboBox_religiousDistribution->setObjectName("comboBox_religiousDistribution");
        comboBox_religiousDistribution->setGeometry(QRect(370, 290, 150, 22));
        label_21 = new QLabel(Dialog);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(540, 200, 90, 22));
        lineEdit_seed = new QLineEdit(Dialog);
        lineEdit_seed->setObjectName("lineEdit_seed");
        lineEdit_seed->setGeometry(QRect(630, 200, 150, 22));
        label_22 = new QLabel(Dialog);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(540, 230, 90, 22));
        comboBox_climateBias = new QComboBox(Dialog);
        comboBox_climateBias->addItem(QString());
        comboBox_climateBias->addItem(QString());
        comboBox_climateBias->addItem(QString());
        comboBox_climateBias->addItem(QString());
        comboBox_climateBias->setObjectName("comboBox_climateBias");
        comboBox_climateBias->setGeometry(QRect(630, 230, 151, 22));
        label_23 = new QLabel(Dialog);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(540, 260, 90, 22));
        comboBox_terrainComplexity = new QComboBox(Dialog);
        comboBox_terrainComplexity->addItem(QString());
        comboBox_terrainComplexity->addItem(QString());
        comboBox_terrainComplexity->addItem(QString());
        comboBox_terrainComplexity->addItem(QString());
        comboBox_terrainComplexity->addItem(QString());
        comboBox_terrainComplexity->setObjectName("comboBox_terrainComplexity");
        comboBox_terrainComplexity->setGeometry(QRect(630, 260, 150, 22));
        label_24 = new QLabel(Dialog);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(540, 290, 90, 22));
        comboBox_naturalDisasterFrequency = new QComboBox(Dialog);
        comboBox_naturalDisasterFrequency->addItem(QString());
        comboBox_naturalDisasterFrequency->addItem(QString());
        comboBox_naturalDisasterFrequency->addItem(QString());
        comboBox_naturalDisasterFrequency->setObjectName("comboBox_naturalDisasterFrequency");
        comboBox_naturalDisasterFrequency->setGeometry(QRect(630, 290, 150, 22));
        btn_confirm = new QPushButton(Dialog);
        btn_confirm->setObjectName("btn_confirm");
        btn_confirm->setGeometry(QRect(620, 340, 161, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "World Name", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Simulation Start", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Simulation End", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Population Cap", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "Settlement Cap", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "Init. Population", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "\316\224t \342\206\222 1 Tick =", nullptr));
        comboBox_deltaTime->setItemText(0, QCoreApplication::translate("Dialog", "1 Day", nullptr));
        comboBox_deltaTime->setItemText(1, QCoreApplication::translate("Dialog", "1 Week (7 Days)", nullptr));
        comboBox_deltaTime->setItemText(2, QCoreApplication::translate("Dialog", "1 Month", nullptr));
        comboBox_deltaTime->setItemText(3, QCoreApplication::translate("Dialog", "6 Months", nullptr));
        comboBox_deltaTime->setItemText(4, QCoreApplication::translate("Dialog", "1 Year", nullptr));
        comboBox_deltaTime->setItemText(5, QCoreApplication::translate("Dialog", "1 Decade (10 Years)", nullptr));

        label_6->setText(QCoreApplication::translate("Dialog", "Avg. Life Expec.", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "Fertility Rate", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "Mortality Rate", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "Init Am. of. Sm.", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "Sm. Growth R.", nullptr));
        label_13->setText(QCoreApplication::translate("Dialog", "Sm. Distr. Type", nullptr));
        comboBox_settlementGrowthRate->setItemText(0, QCoreApplication::translate("Dialog", "Low", nullptr));
        comboBox_settlementGrowthRate->setItemText(1, QCoreApplication::translate("Dialog", "Medium", nullptr));
        comboBox_settlementGrowthRate->setItemText(2, QCoreApplication::translate("Dialog", "High", nullptr));

        comboBox_settlementDistributionType->setItemText(0, QCoreApplication::translate("Dialog", "Random", nullptr));
        comboBox_settlementDistributionType->setItemText(1, QCoreApplication::translate("Dialog", "Clustered", nullptr));
        comboBox_settlementDistributionType->setItemText(2, QCoreApplication::translate("Dialog", "Grid", nullptr));

        label_14->setText(QCoreApplication::translate("Dialog", "Liv. Conditions", nullptr));
        comboBox_livingConditions->setItemText(0, QCoreApplication::translate("Dialog", "Extreme Poverty", nullptr));
        comboBox_livingConditions->setItemText(1, QCoreApplication::translate("Dialog", "Widespread Poverty", nullptr));
        comboBox_livingConditions->setItemText(2, QCoreApplication::translate("Dialog", "Lower-Class Majority", nullptr));
        comboBox_livingConditions->setItemText(3, QCoreApplication::translate("Dialog", "Mixed-Class", nullptr));
        comboBox_livingConditions->setItemText(4, QCoreApplication::translate("Dialog", "Middle-Class Majority", nullptr));
        comboBox_livingConditions->setItemText(5, QCoreApplication::translate("Dialog", "Widespread Wealth", nullptr));
        comboBox_livingConditions->setItemText(6, QCoreApplication::translate("Dialog", "Affluent Society", nullptr));

        label_15->setText(QCoreApplication::translate("Dialog", "Education Level", nullptr));
        comboBox_educationLevel->setItemText(0, QCoreApplication::translate("Dialog", "Low", nullptr));
        comboBox_educationLevel->setItemText(1, QCoreApplication::translate("Dialog", "Medium", nullptr));
        comboBox_educationLevel->setItemText(2, QCoreApplication::translate("Dialog", "High", nullptr));

        label_16->setText(QCoreApplication::translate("Dialog", "Tech Adv. Start", nullptr));
        comboBox_techAdvancementStart->setItemText(0, QCoreApplication::translate("Dialog", "Primitive", nullptr));
        comboBox_techAdvancementStart->setItemText(1, QCoreApplication::translate("Dialog", "Pre-Industrial (Agrarian)", nullptr));
        comboBox_techAdvancementStart->setItemText(2, QCoreApplication::translate("Dialog", "Industrial", nullptr));
        comboBox_techAdvancementStart->setItemText(3, QCoreApplication::translate("Dialog", "Modern", nullptr));
        comboBox_techAdvancementStart->setItemText(4, QCoreApplication::translate("Dialog", "Advanced", nullptr));
        comboBox_techAdvancementStart->setItemText(5, QCoreApplication::translate("Dialog", "Futuristic", nullptr));
        comboBox_techAdvancementStart->setItemText(6, QCoreApplication::translate("Dialog", "Post-Human (Transcendent)", nullptr));

        label_17->setText(QCoreApplication::translate("Dialog", "Economic Syst.", nullptr));
        comboBox_economicSystem->setItemText(0, QCoreApplication::translate("Dialog", "Feudal", nullptr));
        comboBox_economicSystem->setItemText(1, QCoreApplication::translate("Dialog", "Capitalist", nullptr));
        comboBox_economicSystem->setItemText(2, QCoreApplication::translate("Dialog", "Tribal", nullptr));

        checkBox_migration->setText(QCoreApplication::translate("Dialog", "Migration", nullptr));
        label_18->setText(QCoreApplication::translate("Dialog", "Crime/Conflict", nullptr));
        label_19->setText(QCoreApplication::translate("Dialog", "Init. Cultures", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "Religious Dist.", nullptr));
        comboBox_religiousDistribution->setItemText(0, QCoreApplication::translate("Dialog", "Secular", nullptr));
        comboBox_religiousDistribution->setItemText(1, QCoreApplication::translate("Dialog", "Diverse", nullptr));
        comboBox_religiousDistribution->setItemText(2, QCoreApplication::translate("Dialog", "Dominant Religion", nullptr));

        label_21->setText(QCoreApplication::translate("Dialog", "Seed (optional)", nullptr));
        label_22->setText(QCoreApplication::translate("Dialog", "Climate Bias", nullptr));
        comboBox_climateBias->setItemText(0, QCoreApplication::translate("Dialog", "Temperate", nullptr));
        comboBox_climateBias->setItemText(1, QCoreApplication::translate("Dialog", "Cold", nullptr));
        comboBox_climateBias->setItemText(2, QCoreApplication::translate("Dialog", "Desert", nullptr));
        comboBox_climateBias->setItemText(3, QCoreApplication::translate("Dialog", "Mixed", nullptr));

        label_23->setText(QCoreApplication::translate("Dialog", "Terrain Compl.", nullptr));
        comboBox_terrainComplexity->setItemText(0, QCoreApplication::translate("Dialog", "Mountainous", nullptr));
        comboBox_terrainComplexity->setItemText(1, QCoreApplication::translate("Dialog", "Mainly Mountainous", nullptr));
        comboBox_terrainComplexity->setItemText(2, QCoreApplication::translate("Dialog", "Balanced", nullptr));
        comboBox_terrainComplexity->setItemText(3, QCoreApplication::translate("Dialog", "Mainly Flat", nullptr));
        comboBox_terrainComplexity->setItemText(4, QCoreApplication::translate("Dialog", "Flat", nullptr));

        label_24->setText(QCoreApplication::translate("Dialog", "Natur. Desas. Fr.", nullptr));
        comboBox_naturalDisasterFrequency->setItemText(0, QCoreApplication::translate("Dialog", "Rare", nullptr));
        comboBox_naturalDisasterFrequency->setItemText(1, QCoreApplication::translate("Dialog", "Moderately frequent", nullptr));
        comboBox_naturalDisasterFrequency->setItemText(2, QCoreApplication::translate("Dialog", "Common", nullptr));

        btn_confirm->setText(QCoreApplication::translate("Dialog", "Confirm And Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NEWWORLD_H
