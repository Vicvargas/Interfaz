#include "input.h"
#include "ui_input.h"

Input::Input(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Input)
{
    ui->setupUi(this);
}

Input::~Input()
{
    delete ui;
}

void Input::on_input_copyAvailable(bool b)
{

}
