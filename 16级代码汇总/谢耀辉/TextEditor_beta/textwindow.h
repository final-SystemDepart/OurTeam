#ifndef TEXTWINDOW_H
#define TEXTWINDOW_H

#include <QMainWindow>

namespace Ui {
  class TextWindow;
}

class TextWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit TextWindow(QWidget *parent = 0);
  ~TextWindow();

private:
  Ui::TextWindow *ui;
};

#endif // TEXTWINDOW_H
