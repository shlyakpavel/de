/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Feb 14 19:04:02 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionQuit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QStatusBar *statusbar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 450);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon9);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 1, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_8 = new QVBoxLayout(tab_2);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_6);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        toolBox = new QToolBox(dockWidgetContents);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(250, 100));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 250, 109));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        toolBox->addItem(page, QString::fromUtf8("Page 1"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 250, 109));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        toolBox->addItem(page_2, QString::fromUtf8("Page 2"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 250, 109));
        verticalLayout_6 = new QVBoxLayout(page_3);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        toolBox->addItem(page_3, QString::fromUtf8("Page 3"));

        verticalLayout->addWidget(toolBox);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(dockWidgetContents_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(250, 100));
        label->setAutoFillBackground(true);
        label->setFrameShape(QFrame::StyledPanel);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_2);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(16, 16));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menu_File->addAction(actionNew);
        menu_File->addAction(actionOpen);
        menu_File->addAction(actionSave);
        menu_File->addAction(actionSaveAs);
        menu_File->addSeparator();
        menu_File->addAction(actionQuit);
        menu_Edit->addAction(actionUndo);
        menu_Edit->addAction(actionRedo);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionCut);
        menu_Edit->addAction(actionCopy);
        menu_Edit->addAction(actionPaste);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Windows Modern Style Demo", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "&New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open...", 0, QApplication::UnicodeUTF8));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "&Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("MainWindow", "Save &As...", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "&Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "&Redo", 0, QApplication::UnicodeUTF8));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "First Tab", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Second Tab", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "Dock 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "First Toolbox Page", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "Page 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Second Toolbox Page", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "Page 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Third Toolbox Page", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "Page 3", 0, QApplication::UnicodeUTF8));
        dockWidget_2->setWindowTitle(QApplication::translate("MainWindow", "Dock 2", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Second Docked Window", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "Main ToolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
