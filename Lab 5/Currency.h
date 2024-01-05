#pragma once

// ����������� ���� ������
class Currency {
protected:
    double amount;
public:
    Currency(double amount) : amount(amount) {} //����������� ��� ����������� amount
    virtual double toEuro() const = 0;
    virtual double toDollar() const = 0;
    virtual double toPLN() const = 0; 
    virtual ~Currency() {}
};