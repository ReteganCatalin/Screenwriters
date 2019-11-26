/********************************************************************************
** Form generated from reading UI file 'TestPractic.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTPRACTIC_H
#define UI_TESTPRACTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestPracticClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *propose;
    QLineEdit *lineEdit;
    QLineEdit *act;
    QPushButton *SavePlot;
    QPushButton *accept;
    QPushButton *Develop;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *DevelopLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestPracticClass)
    {
        if (TestPracticClass->objectName().isEmpty())
            TestPracticClass->setObjectName(QString::fromUtf8("TestPracticClass"));
        TestPracticClass->resize(654, 524);
        centralWidget = new QWidget(TestPracticClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 641, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(verticalLayoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        propose = new QPushButton(verticalLayoutWidget);
        propose->setObjectName(QString::fromUtf8("propose"));

        horizontalLayout->addWidget(propose);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        act = new QLineEdit(verticalLayoutWidget);
        act->setObjectName(QString::fromUtf8("act"));

        horizontalLayout->addWidget(act);

        SavePlot = new QPushButton(verticalLayoutWidget);
        SavePlot->setObjectName(QString::fromUtf8("SavePlot"));

        horizontalLayout->addWidget(SavePlot);

        accept = new QPushButton(verticalLayoutWidget);
        accept->setObjectName(QString::fromUtf8("accept"));

        horizontalLayout->addWidget(accept);

        Develop = new QPushButton(verticalLayoutWidget);
        Develop->setObjectName(QString::fromUtf8("Develop"));
        Develop->setEnabled(false);

        horizontalLayout->addWidget(Develop);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 380, 641, 61));
        DevelopLayout = new QHBoxLayout(horizontalLayoutWidget);
        DevelopLayout->setSpacing(6);
        DevelopLayout->setContentsMargins(11, 11, 11, 11);
        DevelopLayout->setObjectName(QString::fromUtf8("DevelopLayout"));
        DevelopLayout->setContentsMargins(0, 0, 0, 0);
        TestPracticClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestPracticClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 26));
        TestPracticClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestPracticClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestPracticClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestPracticClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestPracticClass->setStatusBar(statusBar);

        retranslateUi(TestPracticClass);

        QMetaObject::connectSlotsByName(TestPracticClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestPracticClass)
    {
        TestPracticClass->setWindowTitle(QApplication::translate("TestPracticClass", "TestPractic", nullptr));
        propose->setText(QApplication::translate("TestPracticClass", "Propose->", nullptr));
        SavePlot->setText(QApplication::translate("TestPracticClass", "Save Plot", nullptr));
        accept->setText(QApplication::translate("TestPracticClass", "Accept", nullptr));
        Develop->setText(QApplication::translate("TestPracticClass", "Develop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestPracticClass: public Ui_TestPracticClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTPRACTIC_H
