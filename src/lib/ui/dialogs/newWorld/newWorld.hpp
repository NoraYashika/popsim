#pragma once

#include <QtWidgets/QDialog>
#include "newWorld.ui.h"

class NewWorldDialog : public QDialog {
    Q_OBJECT
    public:
        explicit NewWorldDialog(QWidget *parent = nullptr);
        ~NewWorldDialog();

        QString getWorldName() const;
        int getPopulationCap() const;
    
    private:
        Ui::Dialog ui;
};