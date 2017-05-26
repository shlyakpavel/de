/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(686, 456);
        MainWindow->setStyleSheet(QLatin1String("/* Blue ocean */\n"
"QMainWindow, QDialog {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(0, 31, 160), stop:0.630682 rgb(64, 126, 255), stop:0.98 rgb(147, 187, 255), stop:1 rgb(0, 0, 0)); }\n"
"QMenuBar {color: white; background: transparent; }\n"
"QMenu { color: white; background: #00008C; }\n"
"QMenuBar::item { background: transparent; }\n"
"QMenu::item:selected { color: #BBBB44; background-color: #0000BB;}\n"
"QMenu::item { color: white; background-color: #00008C; }\n"
"QDialog *{color: white;}\n"
"QPushButton, QToolButton { color: white; background-color: rgba(0,0,140,255); }\n"
"QPushButton:hover, QToolButton:hover { color: white; background-color: rgba(40,40,180,255); }\n"
"QWidget:disabled {color: #6666EE; background: transparent;}\n"
"QTableView { color: white; background: transparent; selection-background-color: #3399FF;}\n"
"QHeaderView::section { color: white; background-color: rgb(0,0,140); }\n"
"QTableView QTableCornerButton::section { background: #3399FF; border:"
                        " 2px outset #33DDFF; }\n"
"QWidget#widget_Center *{ background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 31, 160, 255), stop:0.630682 rgba(64, 126, 255, 255), stop:0.98 rgba(147, 187, 255, 255), stop:1 rgba(0, 0, 0, 0));}\n"
"QWidget#widget_Center *{font: bold 14pt \"Arial\"; }\n"
"RightClickableButton:flat {color: red; text-decoration: overline; }\n"
"RightClickableButton:hover:!flat {color: rgba(255,200,60,255); }\n"
"QGroupBox, QLabel { color: rgba(205,205,255,255); background: transparent;}\n"
"QLineEdit , QComboBox , QComboBox *{ color: rgba(205,205,255,255); background-color: #2828B4;}\n"
"QRadioButton , QCheckBox { color: white; }\n"
"/*QRadioButton[djulaColor1=\"true\"] { color: yellow; } */\n"
"QWidget#widget_RightStat * {color: rgb(0,0,140); }\n"
"QLabel#label_Correct {color: rgb(26,164,0); font-style: bold;}\n"
"QLabel#label_False {color: rgb(220,0,22); font-style: bold;}\n"
"QLabel#label_UsedHelp {color: rgb(255,170,0); font-style: bold;}\n"
"QLabel#label_SentencesNr"
                        " {font-style: bold; }\n"
"QLabel#label_Done {font-style: bold; }\n"
"QLabel#label_Playmode {font-style: bold; }\n"
"QLabel#label_Performance {font-style: bold; }\n"
"QLabel#label_ThemeName {font-style: bold; font-size: 16pt; text-decoration: underline; color: white; }\n"
"QLabel#label_HunSentence {font-style: bold; font-size: 16pt; color: rgb(0,0,140); background-color: rgba(255,255,255,100); }\n"
"QLabel#label_EnglishSentence {font-style: bold; font-size: 16pt; color: rgb(60,0,100); background-color: rgba(255,255,255,100); }\n"
"QStatusBar { color: white; }\n"
"QTabWidget { background-color: rgba(0,0,60,160); }\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"     border-top: 2px solid #02BBCB;\n"
" }\n"
"QTabWidget::tab-bar {\n"
"     left: 5px; /* move to the right by 5px */\n"
" }\n"
"QTabBar::tab {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #212181, stop: 0.4 #8888DD,\n"
"                                 stop: 0.5 #4848a8, stop: 1.0 #"
                        "6363D3);\n"
"     border: 2px solid #C4C4C3;\n"
"     border-bottom-color: #02777B; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 8ex;\n"
"     padding: 2px;\n"
" }\n"
"\n"
" QTabBar::tab:selected, QTabBar::tab:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #000044, stop: 0.4 #141464,\n"
"                                 stop: 0.5 #006666, stop: 1.0 #003333);\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"     border-color: #9B9B9B;\n"
"     border-bottom-color: #C2BBCB; /* same as pane color */\n"
" }\n"
"\n"
" QTabBar::tab:!selected {\n"
"     margin-top: 2px; /* make non-selected tabs look smaller */\n"
" }\n"
"\n"
"QDialog#TranslateWindow QLabel#hunTextLabel { color: white; }\n"
"\n"
"QProgressBar {\n"
"     border: 2px solid #0578AA;\n"
"     border-radius: 5px;\n"
"	 text-align: center;\n"
"	 background: transparent;\n"
" }\n"
"\n"
" QProgressBar::chunk {\n"
""
                        "     background-color: #0578AA;\n"
"     /*width: 20px;*/\n"
" }\n"
" "));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setTextInteractionFlags(Qt::TextSelectableByMouse);
        textBrowser->setSource(QUrl(QStringLiteral("")));

        gridLayout->addWidget(textBrowser, 4, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 60));
        widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(0, 50));
        pushButton_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(pushButton_3);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(comboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(50, 50));
        pushButton->setMaximumSize(QSize(32, 16777215));
        pushButton->setStyleSheet(QStringLiteral("padding: 3px 0px 3px 0px;"));
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \321\201\320\270\321\201\321\202\320\265\320\274\320\265", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "cpuinfo", 0)
         << QApplication::translate("MainWindow", "mounts", 0)
         << QApplication::translate("MainWindow", "PID", 0)
         << QApplication::translate("MainWindow", "meminfo", 0)
         << QApplication::translate("MainWindow", "partitions", 0)
         << QApplication::translate("MainWindow", "consoles", 0)
         << QApplication::translate("MainWindow", "modules", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "x", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
