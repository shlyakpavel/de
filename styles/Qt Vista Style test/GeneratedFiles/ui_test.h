/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created: Thu Feb 14 19:04:46 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testClass
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionExport;
    QAction *actionPrint;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *vboxLayout1;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testClass)
    {
        if (testClass->objectName().isEmpty())
            testClass->setObjectName(QString::fromUtf8("testClass"));
        testClass->resize(623, 441);
        actionOpen = new QAction(testClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        const QIcon icon = QIcon(QString::fromUtf8(":/images/open.png"));
        actionOpen->setIcon(icon);
        actionClose = new QAction(testClass);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionClose->setCheckable(true);
        actionExit = new QAction(testClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionNew = new QAction(testClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/new.png"));
        actionNew->setIcon(icon1);
        actionSave = new QAction(testClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setCheckable(true);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/save.png"));
        actionSave->setIcon(icon2);
        actionCopy = new QAction(testClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/copy.png"));
        actionCopy->setIcon(icon3);
        actionCut = new QAction(testClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/cut.png"));
        actionCut->setIcon(icon4);
        actionPaste = new QAction(testClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPaste->setEnabled(false);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/paste.png"));
        actionPaste->setIcon(icon5);
        actionExport = new QAction(testClass);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionPrint = new QAction(testClass);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionPrint->setCheckable(true);
        actionPrint->setChecked(true);
        actionPrint->setEnabled(false);
        centralWidget = new QWidget(testClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 81));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(false);

        vboxLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        vboxLayout->addWidget(radioButton_2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 10, 161, 171));
        groupBox_2->setCheckable(true);
        vboxLayout1 = new QVBoxLayout(groupBox_2);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(11, 11, 11, 11);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        vboxLayout1->addWidget(checkBox);

        checkBox_3 = new QCheckBox(groupBox_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setChecked(true);
        checkBox_3->setTristate(true);

        vboxLayout1->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setEnabled(false);
        checkBox_2->setChecked(true);

        vboxLayout1->addWidget(checkBox_2);

        checkBox_4 = new QCheckBox(groupBox_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setEnabled(false);

        vboxLayout1->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(groupBox_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setEnabled(false);
        checkBox_5->setChecked(true);
        checkBox_5->setTristate(true);

        vboxLayout1->addWidget(checkBox_5);

        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setEnabled(false);
        radioButton_3->setGeometry(QRect(50, 120, 111, 20));
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setEnabled(false);
        radioButton_4->setGeometry(QRect(50, 140, 111, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 100, 101, 16));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 190, 341, 171));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 2);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);

        gridLayout->addWidget(lineEdit_2, 0, 2, 1, 2);

        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 1, 0, 1, 2);

        textEdit_2 = new QTextEdit(frame);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setEnabled(false);

        gridLayout->addWidget(textEdit_2, 1, 2, 1, 2);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 2, 0, 1, 1);

        spinBox_2 = new QSpinBox(frame);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setEnabled(false);

        gridLayout->addWidget(spinBox_2, 2, 1, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 2, 2, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(frame);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setEnabled(false);

        gridLayout->addWidget(doubleSpinBox_2, 2, 3, 1, 1);

        testClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        testClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setOrientation(Qt::Horizontal);
        testClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        mainToolBar->addAction(actionNew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionExit);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);

        retranslateUi(testClass);

        QMetaObject::connectSlotsByName(testClass);
    } // setupUi

    void retranslateUi(QMainWindow *testClass)
    {
        testClass->setWindowTitle(QApplication::translate("testClass", "test", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("testClass", "Open", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("testClass", "Close", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("testClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("testClass", "New", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("testClass", "Save", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("testClass", "Copy", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("testClass", "Cut", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("testClass", "Paste", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("testClass", "Export", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("testClass", "Print", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("testClass", "GroupBox", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("testClass", "RadioButton", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("testClass", "RadioButton", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("testClass", "Checkable GroupBox", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("testClass", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("testClass", "CheckBox tristate", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("testClass", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_4->setText(QApplication::translate("testClass", "CheckBox", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("testClass", "CheckBox tristate", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("testClass", "RadioButton", 0, QApplication::UnicodeUTF8));
        radioButton_4->setText(QApplication::translate("testClass", "RadioButton", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("testClass", "Disabled buttons", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("testClass", "123213", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("testClass", "123123123", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("testClass", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("testClass", "Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testClass: public Ui_testClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
