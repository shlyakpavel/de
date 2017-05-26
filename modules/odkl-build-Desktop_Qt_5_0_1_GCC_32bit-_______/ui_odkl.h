/********************************************************************************
** Form generated from reading UI file 'odkl.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ODKL_H
#define UI_ODKL_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_odkl
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *panel;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *MinimisePushButton;
    QPushButton *ExitPushButton;
    QProgressBar *progressBar;
    QWebView *webView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *odkl)
    {
        if (odkl->objectName().isEmpty())
            odkl->setObjectName(QStringLiteral("odkl"));
        odkl->resize(635, 454);
        odkl->setStyleSheet(QLatin1String("QProgressBar:horizontal {\n"
"border: 1px solid gray;\n"
"border-radius: 3px;\n"
"background: white;\n"
"padding: 1px;\n"
"}\n"
"QProgressBar::chunk:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0.5, x2: 1, y2: 0.5, stop: 0 green, stop: 1 white);\n"
"}\n"
"QLabel\n"
"{\n"
"	color:white;\n"
"}\n"
"QFrame\n"
"{\n"
"	border:none;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255,140,25,1),stop:0.5 rgba(230,115,1,1), stop:1 rgba(207,103,0,1));\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color:white;\n"
"background-color: transparent;\n"
"border:none;\n"
"border-radius:0px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"background:#ED6500;\n"
"}\n"
"QMainWindow\n"
"{\n"
"padding:0,0,0,0;\n"
"background:#FFFFFF;\n"
"}\n"
"QWidget\n"
"{\n"
"	border-radius:0px;\n"
"}"));
        centralWidget = new QWidget(odkl);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        panel = new QFrame(centralWidget);
        panel->setObjectName(QStringLiteral("panel"));
        panel->setMinimumSize(QSize(0, 40));
        panel->setMaximumSize(QSize(16777215, 40));
        panel->setFrameShape(QFrame::StyledPanel);
        panel->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(panel);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(panel);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(panel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(40, 40));
        pushButton_2->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton_2);

        lineEdit = new QLineEdit(panel);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(panel);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MinimisePushButton = new QPushButton(panel);
        MinimisePushButton->setObjectName(QStringLiteral("MinimisePushButton"));
        MinimisePushButton->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(MinimisePushButton);

        ExitPushButton = new QPushButton(panel);
        ExitPushButton->setObjectName(QStringLiteral("ExitPushButton"));
        ExitPushButton->setMinimumSize(QSize(40, 40));
        ExitPushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(ExitPushButton);


        verticalLayout->addWidget(panel);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 10));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(progressBar);

        webView = new QWebView(centralWidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));

        verticalLayout->addWidget(webView);

        odkl->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(odkl);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        odkl->setStatusBar(statusBar);

        retranslateUi(odkl);
        QObject::connect(webView, SIGNAL(titleChanged(QString)), label, SLOT(setText(QString)));
        QObject::connect(MinimisePushButton, SIGNAL(clicked()), odkl, SLOT(hide()));
        QObject::connect(webView, SIGNAL(statusBarMessage(QString)), statusBar, SLOT(showMessage(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), webView, SLOT(back()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), webView, SLOT(forward()));
        QObject::connect(webView, SIGNAL(loadProgress(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(webView, SIGNAL(loadStarted()), progressBar, SLOT(show()));
        QObject::connect(webView, SIGNAL(loadFinished(bool)), progressBar, SLOT(hide()));

        QMetaObject::connectSlotsByName(odkl);
    } // setupUi

    void retranslateUi(QMainWindow *odkl)
    {
        odkl->setWindowTitle(QApplication::translate("odkl", "odkl", 0));
        pushButton->setText(QApplication::translate("odkl", "<<", 0));
        pushButton_2->setText(QApplication::translate("odkl", ">>", 0));
        label->setText(QApplication::translate("odkl", "\320\276\320\264\320\275\320\276\320\272\320\273\320\260\321\201\321\201\320\275\320\270\320\272\320\270", 0));
        MinimisePushButton->setText(QApplication::translate("odkl", "-", 0));
        ExitPushButton->setText(QApplication::translate("odkl", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class odkl: public Ui_odkl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ODKL_H
