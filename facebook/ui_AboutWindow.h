/********************************************************************************
** Form generated from reading UI file 'AboutWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *facebookPixmapLabel;
    QLabel *facebookTextLabel;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *closeButton;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(400, 468);
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/logo/Facebook-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutWindow->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(AboutWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 313, 377));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(60, 50, 60, 10);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        facebookPixmapLabel = new QLabel(verticalLayoutWidget);
        facebookPixmapLabel->setObjectName(QStringLiteral("facebookPixmapLabel"));
        facebookPixmapLabel->setMaximumSize(QSize(100, 100));
        facebookPixmapLabel->setPixmap(QPixmap(QString::fromUtf8(":/res/logo/facebook-256x256.png")));
        facebookPixmapLabel->setScaledContents(true);
        facebookPixmapLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(facebookPixmapLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        facebookTextLabel = new QLabel(verticalLayoutWidget);
        facebookTextLabel->setObjectName(QStringLiteral("facebookTextLabel"));
        facebookTextLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(facebookTextLabel);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        closeButton = new QPushButton(verticalLayoutWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutWindow);
        QObject::connect(closeButton, SIGNAL(clicked()), AboutWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "Facebook", 0));
        facebookPixmapLabel->setText(QString());
        facebookTextLabel->setText(QApplication::translate("AboutWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Facebook</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("AboutWindow", "Unofficial Facebook app for your PC", 0));
        label->setText(QApplication::translate("AboutWindow", "Brought to you by,", 0));
        label_2->setText(QApplication::translate("AboutWindow", "Anand Bose <anandbose@in.com>", 0));
        closeButton->setText(QApplication::translate("AboutWindow", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
