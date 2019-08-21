#ifndef INPUT_H
#define INPUT_H

#include <QDialog>

namespace Ui {
class Input;
}
/*! Clase que muestra la ventana para ingresar un input
 * \brief The Input class
 */
class Input : public QDialog
{
    Q_OBJECT

public:
    explicit Input(QWidget *parent = nullptr);
    ~Input();

private slots:
    void on_input_copyAvailable(bool b);

    void on_pushButton_clicked();

private:
    Ui::Input *ui;
};

#endif // INPUT_H
