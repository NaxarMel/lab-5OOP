#pragma once

// Абстрактний клас Валюта
class Currency {
protected:
    double amount;
public:
    Currency(double amount) : amount(amount) {} //Конструктор для ініціалізації amount
    virtual double toEuro() const = 0;
    virtual double toDollar() const = 0;
    virtual double toPLN() const = 0; 
    virtual ~Currency() {}
};