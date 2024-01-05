#pragma once
#include "Currency.h"

// ���� ��� �����
class Hryvnia : public Currency {
public:
    Hryvnia(double amount) : Currency(amount){}
    double toEuro() const override;
    double toDollar() const override;
    double toPLN() const override; 
};
// �������� ��������� � ���� ���� � ������� ���� ���������� �� Currency