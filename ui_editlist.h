/********************************************************************************
** Form generated from reading UI file 'editlist.ui'
**
** Created: Mon 25. Jan 11:57:23 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITLIST_H
#define UI_EDITLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_editList
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *lstList;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QPushButton *btnOk;

    void setupUi(QDialog *editList)
    {
        if (editList->objectName().isEmpty())
            editList->setObjectName(QString::fromUtf8("editList"));
        editList->resize(360, 580);
        gridLayout = new QGridLayout(editList);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(editList);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_2);

        lstList = new QListWidget(editList);
        lstList->setObjectName(QString::fromUtf8("lstList"));
        QFont font;
        font.setPointSize(8);
        lstList->setFont(font);

        verticalLayout->addWidget(lstList);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnCancel = new QPushButton(editList);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMaximumSize(QSize(16777215, 64));
        btnCancel->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon);
        btnCancel->setIconSize(QSize(48, 48));
        btnCancel->setFlat(false);

        horizontalLayout->addWidget(btnCancel);

        btnOk = new QPushButton(editList);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setMaximumSize(QSize(16777215, 64));
        btnOk->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOk->setIcon(icon1);
        btnOk->setIconSize(QSize(48, 48));
        btnOk->setFlat(false);

        horizontalLayout->addWidget(btnOk);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(editList);
        QObject::connect(btnCancel, SIGNAL(clicked()), editList, SLOT(reject()));

        QMetaObject::connectSlotsByName(editList);
    } // setupUi

    void retranslateUi(QDialog *editList)
    {
        editList->setWindowTitle(QApplication::translate("editList", "editList", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("editList", "Objetos a mostrar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnCancel->setToolTip(QApplication::translate("editList", "Cancel", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnCancel->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnOk->setToolTip(QApplication::translate("editList", "Ok", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnOk->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editList: public Ui_editList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITLIST_H
