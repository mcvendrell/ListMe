/****************************************************************************
**
** Copyright (C) 2010 Manuel Conde. Spain.
** Contact: Manuel Conde (manu_conde@hotmail.com)
**
** $QT_BEGIN_LICENSE:LGPL$
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software Foundation
**
** $QT_END_LICENSE$
**
** This program is made for learn purposes and can be distributed and used freely
** with no cost at all. You only must not remove this text to use this code.
**
** Add you own comments here:
****************************************************************************/

#include "editlist.h"
#include "ui_editlist.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream.h>
#include <QSettings>

// Filename for list of posible items and user selected items
const QString FILENAME_ITEMS = "ListMe_items.dat";
const QString FILENAME_USERLIST = "ListMe_userlist.dat";

// Constructor (automatically added from QT Creator)
// This is the standart, I will use my own constructor, because I need a reference to basket form
editList::editList(QWidget *parent) : QDialog(parent), m_ui(new Ui::editList)
{
  m_ui->setupUi(this);
}

// My own constructor with connections to basket
// Read items from both files, load from list_items and check from user list
editList::editList(basket *basketFrm, QWidget *parent) : QDialog(parent), m_ui(new Ui::editList)
{
  m_ui->setupUi(this);

  readSettings();

  // Prepare the file to use
  QString fileName = "C://" + FILENAME_ITEMS;
  QFile file(fileName);

  // Test if file can be open for read
  if (file.open(QIODevice::ReadOnly)) {
    // Read data on the file and load into the list
    QTextStream in(&file);
    while (!in.atEnd()) {
      // We read line-to-line
      QString line = in.readLine();

      // Create an item so we can set properties
      QListWidgetItem *item = new QListWidgetItem;
      item->setText(QString(line));
      item->setCheckState(Qt::Unchecked);

      // Add item to list
      m_ui->lstList->addItem(item);
    }
    file.close();
  }

  // Now read user checked list and check for every element if is in the list, to check it
  // Prepare the file to use
  fileName = "C://" + FILENAME_USERLIST;
  file.setFileName(fileName);

  // Test if file can be open for read
  if (file.open(QIODevice::ReadOnly)) {
    // Read data on the file and check if exists in the list
    QTextStream in(&file);
    while (!in.atEnd()) {
      // We read line-to-line
      QString line = in.readLine();

      // Iterate over list and see if exists
      for (int i = 0; i < m_ui->lstList->count(); i++) {
        if (m_ui->lstList->item(i)->text() == QString(line)) {
          m_ui->lstList->item(i)->setCheckState(Qt::Checked);
        }
      }
    }
  }

  // Connections
  QObject::connect(m_ui->btnOk, SIGNAL(clicked()), basketFrm, SLOT(loadData()));

}

// Destructor (automatically added from QT Creator)
editList::~editList()
{
  delete m_ui;
}

// (automatically added from QT Creator)
void editList::changeEvent(QEvent *e)
{
  QDialog::changeEvent(e);
  switch (e->type()) {
  case QEvent::LanguageChange:
    m_ui->retranslateUi(this);
    break;
  default:
    break;
  }
}

// Method to read settings
void editList::readSettings() {
  QSettings settings;
  int cfgFontSize = settings.value("fontSize", 8).toInt();

  // Set the font
  QFont myFont(m_ui->lstList->font().family(), cfgFontSize);
  m_ui->lstList->setFont(myFont);
}

// Iterate over list and re-do de user list with user-checked items
void editList::on_btnOk_clicked()
{
  // Prepare the file to use
  QString fileName = "C://" + FILENAME_USERLIST;
  QFile file(fileName);

  // Test if file can be open for save
  if (!file.open(QIODevice::WriteOnly)) {
    QMessageBox::information(this, tr("Unable to open file for save"), tr("Cannot open the file for save the items: ") + file.errorString());

  } else {
    // Save data on the list to the file
    QTextStream out(&file);
    for (int i = 0; i < m_ui->lstList->count(); i++) {
      // Save only checked items
      if (m_ui->lstList->item(i)->checkState() == Qt::Checked) {
        out << m_ui->lstList->item(i)->text() << endl;
      }
    }
    file.close();

    // Close the dialog
    this->reject();
  }
}

// To reproduce auto-check with one click on item instead on checkbox area
void editList::on_lstList_itemClicked(QListWidgetItem* item)
{
  item->setCheckState( item->checkState() == Qt::Checked ? Qt::Unchecked : Qt::Checked );
}
