#include "iiivcompare.h"
#include "ui_iiivcompare.h"
#include <QString>
#include <QStringList>

IIIvCompare::IIIvCompare(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IIIvCompare)
{
    ui->setupUi(this);
    ui->aValue->setText(QString::number(0.0));
    ui->bValue->setText(QString::number(0.0));
    ui->cValue->setText(QString::number(0.0));
}

IIIvCompare::~IIIvCompare()
{
    delete ui;
}

void IIIvCompare::on_pushButton_clicked()
{

    /*
     *
     * Variable Needed
     * 3 Position/Status var String
     * 3 InputValueStore var Double-Converted from String
     * 3 EntityPoint     var integers
     *
    */


    //Declearation of Variables Needed

    QStringList pStatus;
    pStatus << "First" << "Second" << "Third" ;;

    QString Aposition,Bposition,Cposition;

    double AvalueIn,BvalueIn,CvalueIn;

    int    Apoints,Bpoints,Cpoints;

    //Initiation of Variables
    Apoints = 0;
    Bpoints = 0;
    Cpoints = 0;

    AvalueIn = ui->aValue->text().toDouble();
    BvalueIn = ui->bValue->text().toDouble();
    CvalueIn = ui->cValue->text().toDouble();

    /*
     * Set of Compare Equations
     */

    //Compare A & B
    if(AvalueIn > BvalueIn){
        Apoints++;
    }else {
        Bpoints++;
    }

    //Compare A & C
    if(AvalueIn > CvalueIn){
        Apoints++;
    }else {
        Cpoints++;
    }

    //Compare B & C
    if(BvalueIn > CvalueIn){
        Bpoints++;
    }else {
        Cpoints++;
    }

    /*
     * Quantifying Values and Assignment of
     * Status for each Elements been Compared.
     *
    */

    //For Element A
    if(Apoints == 2){
        Aposition = pStatus.at(0);
    }else if(Apoints == 1){
        Aposition = pStatus.at(1);
    }else{
        Aposition = pStatus.at(2);
    }

    //For Element B
    if(Bpoints == 2){
        Bposition = pStatus.at(0);
    }else if(Bpoints == 1){
        Bposition = pStatus.at(1);
    }else{
        Bposition = pStatus.at(2);
    }

    //For Element C
    if(Cpoints == 2){
        Cposition = pStatus.at(0);
    }else if(Cpoints == 1){
        Cposition = pStatus.at(1);
    }else{
        Cposition = pStatus.at(2);
    }

    //update Status
    ui->rAStatus->setText(Aposition);
    ui->rBStatus->setText(Bposition);
    ui->rCStatus->setText(Cposition);
}
