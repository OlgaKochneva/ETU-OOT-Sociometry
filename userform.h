#ifndef USERFORM_H
#define USERFORM_H

#include <QWidget>

namespace Ui {
class UserForm;
}

class UserForm : public QWidget
{
    Q_OBJECT

public:
    explicit UserForm(QWidget *parent = 0);
    ~UserForm();

private:
    Ui::UserForm *ui;
};

#endif // USERFORM_H
