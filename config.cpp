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

#include "config.h"
#include "ui_config.h"

#include <QMessageBox>
#include <QFile>
#include <QTextStream.h>
#include <QSettings>

// Filename for list of posible items
const QString FILENAME = "ListMe_items.dat";

// Constructor (automatically added from QT Creator)
// Read items from file and load to List
config::config(QWidget *parent) : QDialog(parent), m_ui(new Ui::config)
{
  m_ui->setupUi(this);

  readSettings();

  // Prepare the file to use
  QString fileName = "C://" + FILENAME;
  QFile file(fileName);

  // Test if file can be open for read
  if (!file.open(QIODevice::ReadOnly)) {
    // Nothing to do, maybe is first execution of program
    //QMessageBox::information(this, tr("Unable to open file"), file.errorString());

  } else {
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
}

// Destructor (automatically added from QT Creator)
config::~config()
{
  writeSettings();
  delete m_ui;
}

// (automatically added from QT Creator)
void config::changeEvent(QEvent *e)
{
  switch (e->type()) {
  case QEvent::LanguageChange:
    m_ui->retranslateUi(this);
    break;
  default:
    break;
  }
}

// Method to read settings
void config::readSettings() {
  QSettings settings;
  bool cfgOrder = settings.value("order", false).toBool();
  int cfgFontSize = settings.value("fontSize", 8).toInt();

  // Set the button checked
  m_ui->bntOrder->setChecked(cfgOrder);
  // Set the font
  QFont myFont(m_ui->lstList->font().family(), cfgFontSize);
  m_ui->lstList->setFont(myFont);
}

// Method to write settings
void config::writeSettings() {
  QSettings settings;
  // Set the button checked
  settings.setValue("order", m_ui->bntOrder->isChecked());
  // Set the font
  settings.setValue("fontSize", m_ui->lstList->font().pointSize());
}

// Add item to list
void config::on_btnAdd_clicked()
{
  if (m_ui->txtItem->text() != "") {
    // Create an item so we can set properties
    QListWidgetItem *item = new QListWidgetItem;
    item->setText(m_ui->txtItem->text());
    item->setCheckState(Qt::Unchecked);

    // Add item to list
    m_ui->lstList->addItem(item);

    // Clear the textbox
    m_ui->txtItem->clear();
  }
}

// Iterate over list and delete user-checked items
void config::on_btnDel_clicked()
{
  for (int i = 0; i < m_ui->lstList->count(); i++) {
    if (m_ui->lstList->item(i)->checkState() == Qt::Checked) {
      m_ui->lstList->takeItem(i);
      // We need to decrement counter, because we have one less element
      // (we deleted it and list has now one less element)
      i--;
    }
  }
}

// Save items to file which is used to have the options for user to choose on edit list
void config::on_btnClose_clicked()
{
  // Prepare the file to use. Save items
  QString fileName = "C://" + FILENAME;
  QFile file(fileName);

  // Test if file can be open for save
  if (!file.open(QIODevice::WriteOnly)) {
    QMessageBox::information(this, tr("Unable to open file for save"), tr("Cannot open the file for save the items: ") + file.errorString());

  } else {
    // Save data on the list to the file
    QTextStream out(&file);
    for (int i = 0; i < m_ui->lstList->count(); i++) {
      out << m_ui->lstList->item(i)->text() << endl;
    }
    file.close();
  }
}

// Decrease font size by 1
void config::on_btnDown_clicked()
{
  QFont myFont(m_ui->lstList->font().family(), m_ui->lstList->font().pointSize());

  myFont.setPointSize(myFont.pointSize() - 1);
  m_ui->lstList->setFont(myFont);
}

// Increase font size by 1
void config::on_btnUp_clicked()
{
  QFont myFont(m_ui->lstList->font().family(), m_ui->lstList->font().pointSize());

  myFont.setPointSize(myFont.pointSize() + 1);
  m_ui->lstList->setFont(myFont);
}

// Set the list ordered
void config::on_bntOrder_toggled(bool checked)
{
  if (checked) {
    // Checked, order items
    m_ui->lstList->setSortingEnabled(true);
    m_ui->lstList->sortItems(Qt::AscendingOrder);
  } else {
    m_ui->lstList->setSortingEnabled(false);
  }
}

// To reproduce auto-check with one click on item instead on checkbox area
void config::on_lstList_itemClicked(QListWidgetItem* item)
{
  item->setCheckState( item->checkState() == Qt::Checked ? Qt::Unchecked : Qt::Checked );
}
