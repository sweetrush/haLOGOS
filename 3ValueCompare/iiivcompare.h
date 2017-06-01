#ifndef IIIVCOMPARE_H
#define IIIVCOMPARE_H

#include <QMainWindow>

namespace Ui {
class IIIvCompare;
}

class IIIvCompare : public QMainWindow
{
    Q_OBJECT

public:
    explicit IIIvCompare(QWidget *parent = 0);
    ~IIIvCompare();

private slots:
    void on_pushButton_clicked();

private:
    Ui::IIIvCompare *ui;
};

#endif // IIIVCOMPARE_H
