#pragma once
#include "Currency.h"

// Клас для гривні
class Hryvnia : public Currency {
public:
    Hryvnia(double amount) : Currency(amount){}
    double toEuro() const override;
    double toDollar() const override;
    double toPLN() const override; 
};
// Створити додаткови й клас Євро і зробити його нащадковим від Currency