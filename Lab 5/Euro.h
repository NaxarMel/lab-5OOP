#pragma once
#include "Currency.h"

// Клас для євро
class Euro : public Currency {
public:
    Euro(double amount) : Currency(amount) {}
    double toEuro() const override;
    double toDollar() const override;
    double toPLN() const override;
};
