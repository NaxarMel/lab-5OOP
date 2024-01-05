#include "Hryvnia.h"

double Hryvnia::toEuro() const {
    return amount / 30.0;
}

double Hryvnia::toDollar() const {
    return amount / 25.0;
}
double Hryvnia::toPLN() const {
    return amount / 7.0;
}