/********************************************************************************
** Form generated from reading UI file 'drivingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVINGWIDGET_H
#define UI_DRIVINGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrivingWidget
{
public:

    void setupUi(QWidget *DrivingWidget)
    {
        if (DrivingWidget->objectName().isEmpty())
            DrivingWidget->setObjectName(QStringLiteral("DrivingWidget"));
        DrivingWidget->resize(400, 300);

        retranslateUi(DrivingWidget);

        QMetaObject::connectSlotsByName(DrivingWidget);
    } // setupUi

    void retranslateUi(QWidget *DrivingWidget)
    {
        DrivingWidget->setWindowTitle(QApplication::translate("DrivingWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DrivingWidget: public Ui_DrivingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVINGWIDGET_H
