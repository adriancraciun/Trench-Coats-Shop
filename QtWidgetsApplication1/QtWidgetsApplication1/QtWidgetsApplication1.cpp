#include "QtWidgetsApplication1.h"

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->service = new Service("trench_coats.txt");
    this->service_sorted_by_size = new Service("");
    this->shopping_bag = new Service("");
    this->InitializeGui();
}

void QtWidgetsApplication1::InitializeGui()
{
    resize(1461, 952);
    QFont font;
    font.setFamily(QString::fromUtf8("Arial"));
    font.setPointSize(12);
    this->setFont(font);
    centralWidget = new QWidget(this);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    groupBox = new QGroupBox(centralWidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(30, 560, 311, 331));
    groupBox->setFont(font);
    pushButton = new QPushButton(groupBox);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(20, 280, 271, 41));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(20, 60, 51, 21));
    label->setFont(font);
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(20, 120, 71, 16));
    label_2->setFont(font);
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(20, 230, 91, 31));
    label_3->setFont(font);
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 180, 61, 16));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Arial"));
    font1.setPointSize(12);
    font1.setBold(false);
    font1.setWeight(50);
    label_4->setFont(font1);
    lineEdit = new QLineEdit(groupBox);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(110, 60, 181, 20));
    lineEdit_2 = new QLineEdit(groupBox);
    lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
    lineEdit_2->setGeometry(QRect(110, 120, 181, 20));
    lineEdit_3 = new QLineEdit(groupBox);
    lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
    lineEdit_3->setGeometry(QRect(110, 180, 181, 20));
    lineEdit_4 = new QLineEdit(groupBox);
    lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
    lineEdit_4->setGeometry(QRect(110, 240, 181, 20));
    groupBox_3 = new QGroupBox(centralWidget);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(360, 560, 331, 111));
    groupBox_3->setFont(font);
    pushButton_3 = new QPushButton(groupBox_3);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setGeometry(QRect(20, 60, 301, 41));
    label_11 = new QLabel(groupBox_3);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(20, 20, 91, 31));
    label_11->setFont(font);
    lineEdit_12 = new QLineEdit(groupBox_3);
    lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
    lineEdit_12->setGeometry(QRect(110, 30, 211, 20));
    groupBox_4 = new QGroupBox(centralWidget);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    groupBox_4->setGeometry(QRect(360, 670, 331, 221));
    groupBox_4->setFont(font);
    pushButton_4 = new QPushButton(groupBox_4);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setGeometry(QRect(10, 172, 301, 41));
    label_12 = new QLabel(groupBox_4);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(20, 30, 281, 41));
    label_12->setFont(font);
    lineEdit_13 = new QLineEdit(groupBox_4);
    lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
    lineEdit_13->setGeometry(QRect(20, 70, 291, 20));
    label_13 = new QLabel(groupBox_4);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setGeometry(QRect(20, 100, 281, 41));
    label_13->setFont(font);
    lineEdit_14 = new QLineEdit(groupBox_4);
    lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
    lineEdit_14->setGeometry(QRect(20, 140, 291, 20));
    pushButton_7 = new QPushButton(centralWidget);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
    pushButton_7->setGeometry(QRect(1010, 570, 291, 41));
    pushButton_7->setFont(font);
    pushButton_8 = new QPushButton(centralWidget);
    pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
    pushButton_8->setGeometry(QRect(730, 570, 271, 41));
    pushButton_8->setFont(font);
    groupBox_5 = new QGroupBox(centralWidget);
    groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
    groupBox_5->setGeometry(QRect(730, 650, 571, 141));
    groupBox_5->setFont(font);
    pushButton_9 = new QPushButton(groupBox_5);
    pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
    pushButton_9->setGeometry(QRect(10, 90, 561, 41));
    label_17 = new QLabel(groupBox_5);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setGeometry(QRect(20, 40, 91, 31));
    label_17->setFont(font);
    lineEdit_18 = new QLineEdit(groupBox_5);
    lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
    lineEdit_18->setGeometry(QRect(100, 50, 461, 20));
    label_9 = new QLabel(centralWidget);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(30, 210, 651, 21));
    label_9->setFont(font);
    label_10 = new QLabel(centralWidget);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(730, 210, 651, 21));
    label_10->setFont(font);
    pushButton_10 = new QPushButton(centralWidget);
    pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
    pushButton_10->setGeometry(QRect(30, 100, 221, 101));
    pushButton_12 = new QPushButton(centralWidget);
    pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
    pushButton_12->setGeometry(QRect(730, 100, 221, 101));
    label_18 = new QLabel(centralWidget);
    label_18->setObjectName(QString::fromUtf8("label_18"));
    label_18->setGeometry(QRect(30, 40, 1201, 51));
    QFont font2;
    font2.setFamily(QString::fromUtf8("Arial"));
    font2.setPointSize(20);
    font2.setBold(true);
    font2.setItalic(true);
    font2.setWeight(75);
    label_18->setFont(font2);
    label_18->setLayoutDirection(Qt::LeftToRight);

    listWidget = new QListWidget(centralWidget);
    listWidget->setObjectName(QString::fromUtf8("listWidget"));
    listWidget->setGeometry(QRect(30, 240, 661, 311));
    listWidget_2 = new QListWidget(centralWidget);
    listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
    listWidget_2->setGeometry(QRect(730, 240, 571, 311));

    lineEdit_5 = new QLineEdit(centralWidget);
    lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
    lineEdit_5->setGeometry(QRect(930, 800, 371, 81));
    pushButton_2 = new QPushButton(centralWidget);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setGeometry(QRect(740, 800, 171, 81));

    pushButton_5 = new QPushButton(centralWidget);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
    pushButton_5->setGeometry(QRect(1320, 800, 131, 81));
    radioButton = new QRadioButton(centralWidget);
    radioButton->setObjectName(QString::fromUtf8("radioButton"));
    radioButton->setGeometry(QRect(1320, 700, 82, 17));
    radioButton_2 = new QRadioButton(centralWidget);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(1320, 670, 82, 17));

    PopulateAdminList();
    connectSignalsAndSlots();

    this->setCentralWidget(centralWidget);

    retranslateUi();
    QMetaObject::connectSlotsByName(this);
}

void QtWidgetsApplication1::retranslateUi()
{
    this->setWindowTitle(QCoreApplication::translate("DesignerProjectClass", "DesignerProject", nullptr));
    groupBox->setTitle(QCoreApplication::translate("DesignerProjectClass", "Add trench coat", nullptr));
    pushButton->setText(QCoreApplication::translate("DesignerProjectClass", "Add", nullptr));
    label->setText(QCoreApplication::translate("DesignerProjectClass", "Size:", nullptr));
    label_2->setText(QCoreApplication::translate("DesignerProjectClass", "Colour:", nullptr));
    label_3->setText(QCoreApplication::translate("DesignerProjectClass", "Photograph:", nullptr));
    label_4->setText(QCoreApplication::translate("DesignerProjectClass", "Price:", nullptr));
    lineEdit->setText(QString());
    groupBox_3->setTitle(QCoreApplication::translate("DesignerProjectClass", "Remove trench coat", nullptr));
    pushButton_3->setText(QCoreApplication::translate("DesignerProjectClass", "Remove", nullptr));
    label_11->setText(QCoreApplication::translate("DesignerProjectClass", "Photograph:", nullptr));
    groupBox_4->setTitle(QCoreApplication::translate("DesignerProjectClass", "Update trench coat", nullptr));
    pushButton_4->setText(QCoreApplication::translate("DesignerProjectClass", "Update", nullptr));
    label_12->setText(QCoreApplication::translate("DesignerProjectClass", "Initial Photograph:", nullptr));
    label_13->setText(QCoreApplication::translate("DesignerProjectClass", "Updated Photograph:", nullptr));
    lineEdit_14->setText(QString());
    pushButton_7->setText(QCoreApplication::translate("DesignerProjectClass", "Skip", nullptr));
    pushButton_8->setText(QCoreApplication::translate("DesignerProjectClass", "Add", nullptr));
    groupBox_5->setTitle(QCoreApplication::translate("DesignerProjectClass", "Filter the list for a given size:", nullptr));
    pushButton_9->setText(QCoreApplication::translate("DesignerProjectClass", "Filter", nullptr));
    label_17->setText(QCoreApplication::translate("DesignerProjectClass", "Size:", nullptr));
    label_9->setText(QCoreApplication::translate("DesignerProjectClass", "The Admin Mode", nullptr));
    label_10->setText(QCoreApplication::translate("DesignerProjectClass", "The User Mode", nullptr));
    pushButton_10->setText(QCoreApplication::translate("DesignerProjectClass", "Start Up Admin Mode", nullptr));
    pushButton_12->setText(QCoreApplication::translate("DesignerProjectClass", "Start Up User Mode", nullptr));
    label_18->setText(QCoreApplication::translate("DesignerProjectClass", "Trench Coats", nullptr));
    pushButton_2->setText(QCoreApplication::translate("DesignerProjectClass", "Calculate Sum", nullptr));
    pushButton_5->setText(QCoreApplication::translate("DesignerProjectClass", "Display in app", nullptr));
    radioButton->setText(QCoreApplication::translate("DesignerProjectClass", "Csv", nullptr));
    radioButton_2->setText(QCoreApplication::translate("DesignerProjectClass", "Html", nullptr));
}

void QtWidgetsApplication1::AddTrenchCoat()
{
    std::string size = lineEdit->text().toStdString();
    std::string colour = lineEdit_2->text().toStdString();
    std::string price = lineEdit_3->text().toStdString();
    std::string photograph = lineEdit_4->text().toStdString();

    TrenchCoat trench(size, colour, price, photograph);

    try {
        int validate = service->AddTrenchCoatService(trench);
        if (validate == -1)
        {
            QMessageBox messageBox;
            messageBox.critical(0, "Error", "A trench with the given photograph already exists.");
        }
        this->PopulateAdminList();
    }
    catch (TrenchCoatException& e)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "Invalid input!");
    }
    catch (RepositoryException& repo_error)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "The trench coat is already in the list!");
    }
}

void QtWidgetsApplication1::RemoveTrenchCoat()
{
    std::string trench_remove_photograph = lineEdit_12->text().toStdString();
    int validate = service->DeleteTrenchCoatService(trench_remove_photograph);
    if (validate == -1)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "There are no trenches with the given photograph in the list.");
    } 
    this->PopulateAdminList();
}

void QtWidgetsApplication1::UpdateTrenchCoat()
{
    std::string trench_to_update_photograph = lineEdit_13->text().toStdString();
    std::string trench_updated_photograph = lineEdit_14->text().toStdString();

    int validate = service->UpdateTrenchCoatService(trench_to_update_photograph, trench_updated_photograph);
    if (validate == -1)
    {
        QMessageBox messageBox;
        messageBox.critical(0, "Error", "A trench coat with the given name does not exist!");
    }
    this->PopulateAdminList();
}

void QtWidgetsApplication1::PopulateAdminList()
{
    listWidget->clear();
    int index = 1;
    for (auto t : this->service->GetRepository()->GetDynamicArray())
    {
        QString current_element = QString::fromStdString(std::to_string(index) + ' ' + t.GetSize() + ' ' + t.GetColour() + ' ' + t.GetPrice() + ' ' + t.GetPhotograph());
        listWidget->addItem(current_element);
        index++;
    }
}

void QtWidgetsApplication1::FilterBySize()
{
    if (radioButton->isChecked())
        this->list = new CSVList;
    else
        this->list = new HTMLList;

    this->service_sorted_by_size = new Service("");
    index_in_service = 0;
    int length = this->service->GetRepository()->GetDynamicArray().size();

    std::string trench_size = lineEdit_18->text().toStdString();

    if (trench_size == "")
        for (int i = 0; i < length; i++)
        {
            TrenchCoat trench(this->service->GetRepository()->GetDynamicArray()[i]);
            service_sorted_by_size->GetRepository()->GetDynamicArray().push_back(trench);
        }
    else
        for (int i = 0; i < length; i++)
        {  
            if (i == length - 1)
                break;
            TrenchCoat trench(this->service->GetRepository()->GetDynamicArray()[i]);
            if (trench.GetSize() == trench_size)
                service_sorted_by_size->AddTrenchCoatService(trench);
        }

    UpdateUserList();
}

void QtWidgetsApplication1::UpdateUserList()
{
    listWidget_2->clear();
    if (index_in_service >= this->service_sorted_by_size->GetRepository()->GetDynamicArray().size())
        return;
    QString current_element = QString::fromStdString(this->service_sorted_by_size->GetRepository()->GetDynamicArray()[index_in_service].ToString());
    index_in_service++;
    listWidget_2->addItem(current_element);
}

void QtWidgetsApplication1::DisplayList()
{
    this->list->open();
}

void QtWidgetsApplication1::SkipTrenchCoat()
{
    this->UpdateUserList();
}

void QtWidgetsApplication1::ComputeShoppingBag()
{
    std::string text_string;
    text_string += "The items in your shopping bag are : \n";
        
    int shopping_bag_length = shopping_bag->GetRepository()->GetDynamicArray().size();
    int shopping_bag_price = 0;
    for (int j = 0; j < shopping_bag_length; j++)
    {
        int x = j + 1;
        text_string += std::to_string(x);
        TrenchCoat trench(shopping_bag->GetRepository()->GetDynamicArray()[j]);
        text_string += trench.ToString() + "\n";

        shopping_bag_price += stoi(trench.GetPrice());
    }
    text_string += "\nThe total price in the shopping bag is: " + std::to_string(shopping_bag_price) + '\n';

    this->lineEdit_5->setText(QString::fromStdString(text_string));
}

void QtWidgetsApplication1::AddToShoppingBag()
{
    if (index_in_service > this->service_sorted_by_size->GetRepository()->GetDynamicArray().size())
        return;

    TrenchCoat trench(service_sorted_by_size->GetRepository()->GetDynamicArray()[index_in_service - 1]);
    shopping_bag->AddTrenchCoatService(trench);
    UpdateUserList();
    this->list->save(shopping_bag->GetRepository()->GetDynamicArray());
}

void QtWidgetsApplication1::connectSignalsAndSlots()
{
    QObject::connect(this->pushButton, SIGNAL(clicked()), this, SLOT(AddTrenchCoat()));
    QObject::connect(this->pushButton_3, SIGNAL(clicked()), this, SLOT(RemoveTrenchCoat()));
    QObject::connect(this->pushButton_4, SIGNAL(clicked()), this, SLOT(UpdateTrenchCoat()));
    QObject::connect(this->pushButton_8, SIGNAL(clicked()), this, SLOT(AddToShoppingBag()));
    QObject::connect(this->pushButton_7, SIGNAL(clicked()), this, SLOT(SkipTrenchCoat()));
    QObject::connect(this->pushButton_9, SIGNAL(clicked()), this, SLOT(FilterBySize()));
    QObject::connect(this->pushButton_2, SIGNAL(clicked()), this, SLOT(ComputeShoppingBag()));
    QObject::connect(this->pushButton_5, SIGNAL(clicked()), this, SLOT(DisplayList()));
}