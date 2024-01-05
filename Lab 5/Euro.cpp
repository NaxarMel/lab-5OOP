#include "Euro.h"

double Euro::toEuro() const {
    return amount; 
}

double Euro::toDollar() const {
    return amount * 1.2; 
}

double Euro::toPLN() const {
    return amount * 4.5; 
}
