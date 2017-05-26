/********************************************************************************
** Form generated from reading UI file 'FacebookWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEBOOKWIDGET_H
#define UI_FACEBOOKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FacebookWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backButton;
    QPushButton *forwardButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *aboutButton;
    QPushButton *closeButton;
    QProgressBar *progressBar;

    void setupUi(QWidget *FacebookWidget)
    {
        if (FacebookWidget->objectName().isEmpty())
            FacebookWidget->setObjectName(QStringLiteral("FacebookWidget"));
        FacebookWidget->resize(389, 427);
        FacebookWidget->setStyleSheet(QLatin1String("#FacebookWidget {\n"
"	background:#3b5998;\n"
"	border: 1px solid gray;\n"
"	border-radius:5px;\n"
"}"));
        verticalLayoutWidget = new QWidget(FacebookWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 366, 49));
        mainLayout = new QVBoxLayout(verticalLayoutWidget);
        mainLayout->setSpacing(0);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(5, 4, 5, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        backButton = new QPushButton(verticalLayoutWidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy);
        backButton->setMaximumSize(QSize(50, 16777215));
        backButton->setFocusPolicy(Qt::NoFocus);
        backButton->setStyleSheet(QLatin1String("#backButton {\n"
"	background:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(208, 208, 208, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border: 1px solid #33b5e5;\n"
"	border-right:0.5px solid rgb(208,208,208);\n"
"	border-top-left-radius: 5px;\n"
"	border-bottom-left-radius: 5px;\n"
"	width:40px;\n"
"	height:25px;\n"
"}"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/toolbar/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(backButton);

        forwardButton = new QPushButton(verticalLayoutWidget);
        forwardButton->setObjectName(QStringLiteral("forwardButton"));
        forwardButton->setMaximumSize(QSize(50, 16777215));
        forwardButton->setFocusPolicy(Qt::NoFocus);
        forwardButton->setStyleSheet(QLatin1String("#forwardButton {\n"
"    background:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(208, 208, 208, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border: 1px solid #33b5e5;\n"
"	border-left: none;\n"
"	border-top-right-radius:5px;\n"
"	border-bottom-right-radius: 5px;\n"
"	width:40px;\n"
"	height:25px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/toolbar/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        forwardButton->setIcon(icon1);
        forwardButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(forwardButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("#label {\n"
"border:0px;\n"
"}"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/logo/Facebook.png")));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        aboutButton = new QPushButton(verticalLayoutWidget);
        aboutButton->setObjectName(QStringLiteral("aboutButton"));
        aboutButton->setMaximumSize(QSize(50, 16777215));
        aboutButton->setFocusPolicy(Qt::NoFocus);
        aboutButton->setStyleSheet(QLatin1String("#aboutButton {\n"
"	background:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(208, 208, 208, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border: 1px solid #33b5e5;\n"
"	border-right:0.5px solid rgb(208,208,208);\n"
"	border-top-left-radius: 5px;\n"
"	border-bottom-left-radius: 5px;\n"
"	width:40px;\n"
"	height:25px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/toolbar/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutButton->setIcon(icon2);
        aboutButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(aboutButton);

        closeButton = new QPushButton(verticalLayoutWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setFocusPolicy(Qt::NoFocus);
        closeButton->setStyleSheet(QLatin1String("#closeButton {\n"
"    background:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(208, 208, 208, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border: 1px solid #33b5e5;\n"
"	border-left: none;\n"
"	border-top-right-radius:5px;\n"
"	border-bottom-right-radius: 5px;\n"
"	width:40px;\n"
"	height:25px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/toolbar/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon3);
        closeButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(closeButton);


        mainLayout->addLayout(horizontalLayout);

        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 3));
        progressBar->setStyleSheet(QLatin1String("#progressBar {\n"
"	background: #3a5887;\n"
"	border: 0px;\n"
"}\n"
"\n"
"#progressBar::chunk {\n"
"	background:#33b5e5;\n"
"}"));
        progressBar->setValue(24);

        mainLayout->addWidget(progressBar);


        retranslateUi(FacebookWidget);

        QMetaObject::connectSlotsByName(FacebookWidget);
    } // setupUi

    void retranslateUi(QWidget *FacebookWidget)
    {
        FacebookWidget->setWindowTitle(QApplication::translate("FacebookWidget", "Facebook", 0));
        backButton->setText(QString());
        forwardButton->setText(QString());
        label->setText(QString());
        aboutButton->setText(QString());
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FacebookWidget: public Ui_FacebookWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEBOOKWIDGET_H
