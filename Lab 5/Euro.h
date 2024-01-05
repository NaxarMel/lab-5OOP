#pragma once
#include "Currency.h"

// ���� ��� ����
class Euro : public Currency {
public:
    Euro(double amount) : Currency(amount) {}
    double toEuro() const override;
    double toDollar() const override;
    double toPLN() const override;
};
