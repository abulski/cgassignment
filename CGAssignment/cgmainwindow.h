#ifndef CGMAINWINDOW_H
#define CGMAINWINDOW_H

#include <QMainWindow>

//test
namespace Ui {
class CgMainWindow;
}

class CgMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CgMainWindow(QWidget *parent = 0);
    ~CgMainWindow();

private:
    Ui::CgMainWindow *ui;
};

#endif // CGMAINWINDOW_H
