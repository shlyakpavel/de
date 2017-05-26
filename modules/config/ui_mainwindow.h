/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exitaction;
    QAction *saveas;
    QAction *save;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QToolBox *toolBox;
    QWidget *mainpage;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox;
    QLabel *language;
    QSpacerItem *verticalSpacer;
    QLabel *themelabel;
    QLineEdit *themeselector;
    QWidget *otherspage;
    QWidget *edittab;
    QGridLayout *gridLayout_3;
    QTextBrowser *textBrowser;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        MainWindow->setStyleSheet(QLatin1String(".QWidget\n"
"{\n"
"	background-color: rgb(55, 189, 255);\n"
"}\n"
"QToolBar\n"
"{\n"
"	background-color: rgb(158, 242, 224);\n"
"}\n"
"QMenuBar\n"
"{\n"
"	background-color: rgb(177, 255, 242);\n"
"	padding: 4px 4px 4px 4px;\n"
"}\n"
" QMenuBar::item {\n"
"     spacing: 3px; /* spacing between menu bar items */\n"
"     padding: 1px 4px;\n"
"     background: transparent;\n"
"     border-radius: 4px;\n"
" }\n"
" QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"     background-color: rgb(85, 170, 255);\n"
"	color:white;\n"
" }\n"
"\n"
" QMenu {\n"
"     background-color: rgb(177, 255, 242);/*  sets background of the menu */\n"
"	/*background-color: rgb(255, 255, 255);\n"
"	/*background:transparent;*/\n"
" }\n"
"\n"
" QMenu::item {\n"
"     /* sets background of menu item. set this to something non-transparent\n"
"         if you want menu color and menu item color to be different */\n"
"     /*background-color: transparent;*/\n"
"	padding:5px 5px 5px 5px;\n"
"	border:1px solid rgb(170, 17"
                        "0, 255) ;\n"
"	border-radius:4px;\n"
"	background-color: rgb(170, 255, 255);\n"
"	border-top-color: rgba(255, 255, 255, 0);\n"
"	border-bottom-color: rgba(255, 255, 255, 0);\n"
" }\n"
"\n"
" QMenu::item:selected { /* when user selects item using mouse or keyboard */\n"
"    /*background-color: rgb(85, 170, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	border-bottom-color: rgb(170, 170, 255);*/\n"
"	background-color: rgb(85, 170, 255);\n"
"	color:white;\n"
" }\n"
"\n"
"\n"
"QLineEdit,QComboBox\n"
"{\n"
"	border:1px solid rgb(170, 170, 255) ;\n"
"	border-radius:4px;\n"
"	background-color: rgb(170, 255, 255);\n"
"}\n"
"\n"
"QLineEdit::hover,QComboBox::hover\n"
"{\n"
"	background-color: rgb(85, 170, 255);\n"
"	color:white;\n"
"}\n"
"\n"
"QLineEdit::hover::pressed\n"
"{\n"
"	background-color: white;\n"
"}\n"
"\n"
"QComboBox::item\n"
"{\n"
"	background-color: rgb(151, 243, 255);\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{\n"
"	padding: 15px 15px 10.5px 15px;\n"
"	border: 2px solid;\n"
"	border-color: rgb(170, 85, 255);\n"
"	bord"
                        "er-bottom-color: rgb(255, 255, 255);\n"
"	border-radius:1px;\n"
"	color:white;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.573864, stop:0 rgba(0, 0, 224, 255), stop:1 rgba(49, 0, 140, 255))	\n"
"}\n"
"\n"
"QTabBar::tab::selected\n"
"{\n"
"	padding: 15px 15px 10.5px 15px;\n"
"	border: 2px solid;\n"
"	border-color: rgb(0, 170, 255);\n"
"	border-bottom-color: rgba(255, 255, 255, 0);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(79, 79, 224, 255), stop:1 rgb(55, 189, 255));\n"
"	/*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(79, 79, 224, 255), stop:1 rgba(49, 0, 140, 255));*/\n"
"}\n"
"\n"
"QTabBar::tab::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(79, 79, 224, 255), stop:1 rgba(49, 0, 140, 255));\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.573864, stop:0 rgba(0, 0, 224, 255), stop:1 rgba(49, 0,"
                        " 140, 255));\n"
"}\n"
"\n"
"QMainWindow\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(158, 242, 224, 255), stop:1 rgba(49, 255, 140, 255));\n"
"}\n"
"\n"
"QTabWidget\n"
"{\n"
"	background-color: rgb(55, 189, 255);\n"
"}\n"
"\n"
".QFrame\n"
"{\n"
"	border-radius:4px;	\n"
"	border:1px solid rgb(170, 170, 255) ;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 251, 194, 255),\n"
"stop:0.5 rgba(0, 251, 194, 255), stop:1 rgba(63, 255, 255, 250));\n"
"}\n"
"QAbstractButton\n"
"{\n"
"	border:1px solid rgb(170, 170, 255) ;\n"
"	border-radius:4px;\n"
"	padding: 5px 5px;\n"
"	background-color: rgb(170, 255, 255);\n"
"}\n"
"QAbstractButton:hover\n"
"{\n"
"	background-color: rgb(85, 170, 255);\n"
"	color:white;\n"
"}\n"
"\n"
"QAbstractButton:hover:pressed\n"
"{\n"
"	background-color: rgb(85, 85, 255);\n"
"	color:white;\n"
"}"));
        exitaction = new QAction(MainWindow);
        exitaction->setObjectName(QStringLiteral("exitaction"));
        saveas = new QAction(MainWindow);
        saveas->setObjectName(QStringLiteral("saveas"));
        save = new QAction(MainWindow);
        save->setObjectName(QStringLiteral("save"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        toolBox = new QToolBox(tab);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        mainpage = new QWidget();
        mainpage->setObjectName(QStringLiteral("mainpage"));
        mainpage->setGeometry(QRect(0, 0, 346, 68));
        gridLayout_4 = new QGridLayout(mainpage);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        comboBox = new QComboBox(mainpage);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_4->addWidget(comboBox, 0, 1, 1, 1);

        language = new QLabel(mainpage);
        language->setObjectName(QStringLiteral("language"));

        gridLayout_4->addWidget(language, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);

        themelabel = new QLabel(mainpage);
        themelabel->setObjectName(QStringLiteral("themelabel"));

        gridLayout_4->addWidget(themelabel, 1, 0, 1, 1);

        themeselector = new QLineEdit(mainpage);
        themeselector->setObjectName(QStringLiteral("themeselector"));

        gridLayout_4->addWidget(themeselector, 1, 1, 1, 1);

        toolBox->addItem(mainpage, QString::fromUtf8("\320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\265"));
        otherspage = new QWidget();
        otherspage->setObjectName(QStringLiteral("otherspage"));
        otherspage->setGeometry(QRect(0, 0, 360, 65));
        toolBox->addItem(otherspage, QString::fromUtf8("\321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\275\320\276\320\265"));

        gridLayout_2->addWidget(toolBox, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        edittab = new QWidget();
        edittab->setObjectName(QStringLiteral("edittab"));
        gridLayout_3 = new QGridLayout(edittab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        textBrowser = new QTextBrowser(edittab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setReadOnly(false);
        textBrowser->setOpenLinks(false);

        gridLayout_3->addWidget(textBrowser, 1, 0, 1, 1);

        frame = new QFrame(edittab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(30, 30));
        pushButton->setMaximumSize(QSize(150, 30));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        tabWidget->addTab(edittab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuBar->setNativeMenuBar(false);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(menu_2->menuAction());
        menu->addAction(exitaction);
        menu_2->addAction(saveas);
        menu_2->addAction(save);
        mainToolBar->addAction(save);

        retranslateUi(MainWindow);
        QObject::connect(exitaction, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        exitaction->setText(QApplication::translate("MainWindow", "\320\262\321\213\320\271\321\202\320\270", 0));
#ifndef QT_NO_TOOLTIP
        exitaction->setToolTip(QApplication::translate("MainWindow", "\320\262\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
#endif // QT_NO_TOOLTIP
        exitaction->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        saveas->setText(QApplication::translate("MainWindow", "\320\262 \320\276\321\202\320\264\320\265\320\273\321\214\320\275\321\213\320\271 \321\204\320\260\320\271\320\273", 0));
        save->setText(QApplication::translate("MainWindow", "\320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216", 0));
        save->setIconText(QApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271(Russian)", 0)
         << QApplication::translate("MainWindow", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271(English)", 0)
        );
        language->setText(QApplication::translate("MainWindow", "\321\217\320\267\321\213\320\272:", 0));
        themelabel->setText(QApplication::translate("MainWindow", "\321\202\320\265\320\274\320\260", 0));
        toolBox->setItemText(toolBox->indexOf(mainpage), QApplication::translate("MainWindow", "\320\276\321\201\320\275\320\276\320\262\320\275\320\276\320\265", 0));
        toolBox->setItemText(toolBox->indexOf(otherspage), QApplication::translate("MainWindow", "\321\200\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\275\320\276\320\265", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\277\321\200\320\276\321\201\321\202\320\260\321\217 \320\275\320\260\321\201\321\202\320\276\320\271\320\272\320\260", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(edittab), QApplication::translate("MainWindow", "\321\200\320\265\320\264\320\260\320\272\321\202\320\276\321\200", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\321\204\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
