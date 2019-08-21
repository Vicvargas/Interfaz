#ifndef INPUT_H
#define INPUT_H

#include <QDialog>

namespace Ui {
class Input;
}

class Input : public QDialog
{
    Q_OBJECT

public:
    explicit Input(QWidget *parent = nullptr);
    ~Input();

private slots:
    void on_input_copyAvailable(bool b);

private:
    Ui::Input *ui;
};

#endif // INPUT_H
