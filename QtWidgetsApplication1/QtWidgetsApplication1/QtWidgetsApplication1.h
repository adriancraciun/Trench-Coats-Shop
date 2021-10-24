#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtWidgetsApplication1.h"
#include "user_interface.h"
#include "trench_coat_validator.h"
#include "repository_exception.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QtWidgets/QListWidget>
#include <qmessagebox.h>
#include <qradiobutton.h>


class QtWidgetsApplication1 : public QMainWindow
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtWidgetsApplication1Class ui;
    Service* service;
    Service* shopping_bag;
    Service* service_sorted_by_size;
    int index_in_service = 0;

    std::string text_file;
    Repository* list;

    QWidget* centralWidget;
    QGroupBox* groupBox;
    QPushButton* pushButton;
    QLabel* label;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_4;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QLineEdit* lineEdit_3;
    QLineEdit* lineEdit_4;
    QGroupBox* groupBox_3;
    QPushButton* pushButton_3;
    QLabel* label_11;
    QLineEdit* lineEdit_12;
    QGroupBox* groupBox_4;
    QPushButton* pushButton_4;
    QLabel* label_12;
    QLineEdit* lineEdit_13;
    QLabel* label_13;
    QLineEdit* lineEdit_14;
    QListWidget* listWidget;
    QListWidget* listWidget_2;
    QPushButton* pushButton_7;
    QPushButton* pushButton_8;
    QGroupBox* groupBox_5;
    QPushButton* pushButton_9;
    QLabel* label_17;
    QLineEdit* lineEdit_18;
    QLabel* label_9;
    QLabel* label_10;
    QPushButton* pushButton_10;
    QPushButton* pushButton_12;
    QLabel* label_18;
    QMenuBar* menuBar;
    QToolBar* mainToolBar;
    QStatusBar* statusBar;
    QLineEdit* lineEdit_5;
    QPushButton* pushButton_2;
    QPushButton* pushButton_5;
    QRadioButton* radioButton;
    QRadioButton* radioButton_2;

    void InitializeGui();
    void PopulateAdminList();
    void retranslateUi();
    void connectSignalsAndSlots();

private slots:
    void SkipTrenchCoat();
    void ComputeShoppingBag();
    void AddToShoppingBag();
    void AddTrenchCoat();
    void RemoveTrenchCoat();
    void UpdateTrenchCoat();
    void FilterBySize();
    void UpdateUserList();
    void DisplayList();
};
