#include "input.h"
#include "ui_input.h"
#include "cliente.h"

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

void Input::on_pushButton_clicked()
{
    Cliente *c = new Cliente;
    string s = 'q'+ui->input->toPlainText().toStdString();
    char cr[sizeof(s)+1];
    strcpy(cr,s.c_str());
    c->enviar(cr);
}
