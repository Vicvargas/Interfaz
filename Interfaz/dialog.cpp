#include "dialog.h"
#include "ui_dialog.h"
#include "input.h"
#include "cliente.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),

    ui(new Ui::Dialog)
{
    ui->setupUi(this);


}




Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton1_clicked()
{
  Input  *g = new Input();
  g->show();



}

void Dialog::on_pushButton2_clicked()
{
    Cliente *c = new Cliente;
    string s = "a";
    char cr[sizeof(s)];
    strcpy(cr,s.c_str());
    c->enviar(cr);

}

void Dialog::on_pushButton3_clicked()
{
    Input  *g = new Input();
    g->show();


}

void Dialog::on_pushButton4_clicked()
{
    Input  *g = new Input();
    g->show();

}

void Dialog::on_pushButton5_clicked()
{
    Input  *g = new Input();
    g->show();

}

void Dialog::on_pushButton6_clicked()
{
    Input  *g = new Input();
    g->show();

}


