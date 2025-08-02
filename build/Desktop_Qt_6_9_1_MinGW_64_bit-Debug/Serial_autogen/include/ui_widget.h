/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QPlainTextEdit *ReceiveEdit;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QComboBox *SerialCb;
    QLabel *label;
    QComboBox *baudrateCb;
    QLabel *label_2;
    QComboBox *DataCb;
    QLabel *label_3;
    QComboBox *StopCb;
    QLabel *label_4;
    QComboBox *CheckCb;
    QLabel *label_5;
    QGridLayout *gridLayout_2;
    QLineEdit *SendEdit;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *OpenBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *CloseBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *SendBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *DeleteBt;
    QLabel *label_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(645, 370);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setObjectName("gridLayout_3");
        ReceiveEdit = new QPlainTextEdit(Widget);
        ReceiveEdit->setObjectName("ReceiveEdit");
        ReceiveEdit->setReadOnly(true);

        gridLayout_3->addWidget(ReceiveEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        SerialCb = new QComboBox(Widget);
        SerialCb->setObjectName("SerialCb");

        gridLayout->addWidget(SerialCb, 0, 0, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        baudrateCb = new QComboBox(Widget);
        baudrateCb->addItem(QString());
        baudrateCb->addItem(QString());
        baudrateCb->addItem(QString());
        baudrateCb->setObjectName("baudrateCb");
        baudrateCb->setEnabled(true);
        baudrateCb->setFrame(true);

        gridLayout->addWidget(baudrateCb, 1, 0, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        DataCb = new QComboBox(Widget);
        DataCb->addItem(QString());
        DataCb->addItem(QString());
        DataCb->addItem(QString());
        DataCb->addItem(QString());
        DataCb->setObjectName("DataCb");

        gridLayout->addWidget(DataCb, 2, 0, 1, 1);

        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        StopCb = new QComboBox(Widget);
        StopCb->addItem(QString());
        StopCb->addItem(QString());
        StopCb->addItem(QString());
        StopCb->setObjectName("StopCb");

        gridLayout->addWidget(StopCb, 3, 0, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        CheckCb = new QComboBox(Widget);
        CheckCb->addItem(QString());
        CheckCb->setObjectName("CheckCb");

        gridLayout->addWidget(CheckCb, 4, 0, 1, 1);

        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        SendEdit = new QLineEdit(Widget);
        SendEdit->setObjectName("SendEdit");

        gridLayout_2->addWidget(SendEdit, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        OpenBt = new QPushButton(Widget);
        OpenBt->setObjectName("OpenBt");

        horizontalLayout_7->addWidget(OpenBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        CloseBt = new QPushButton(Widget);
        CloseBt->setObjectName("CloseBt");

        horizontalLayout_7->addWidget(CloseBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        SendBt = new QPushButton(Widget);
        SendBt->setObjectName("SendBt");

        horizontalLayout_7->addWidget(SendBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        DeleteBt = new QPushButton(Widget);
        DeleteBt->setObjectName("DeleteBt");

        horizontalLayout_7->addWidget(DeleteBt);


        gridLayout_2->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        QFont font;
        font.setPointSize(20);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        baudrateCb->setCurrentIndex(2);
        DataCb->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267", nullptr));
        baudrateCb->setItemText(0, QCoreApplication::translate("Widget", "4800", nullptr));
        baudrateCb->setItemText(1, QCoreApplication::translate("Widget", "9600", nullptr));
        baudrateCb->setItemText(2, QCoreApplication::translate("Widget", "115200", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        DataCb->setItemText(0, QCoreApplication::translate("Widget", "5", nullptr));
        DataCb->setItemText(1, QCoreApplication::translate("Widget", "6", nullptr));
        DataCb->setItemText(2, QCoreApplication::translate("Widget", "7", nullptr));
        DataCb->setItemText(3, QCoreApplication::translate("Widget", "8", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        StopCb->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        StopCb->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        StopCb->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        CheckCb->setItemText(0, QCoreApplication::translate("Widget", "\346\227\240", nullptr));

        label_5->setText(QCoreApplication::translate("Widget", "\346\243\200\351\252\214\344\275\215", nullptr));
        OpenBt->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        CloseBt->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
        SendBt->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        DeleteBt->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
