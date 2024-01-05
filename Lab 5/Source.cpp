#include <iostream>
#include "Currency.h"
#include "Hryvnia.h"
#include "Euro.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double amount;
    std::cout << "¬вед≥ть сумму: ";
    std::cin >> amount;

    Hryvnia hryvnia(amount);
    Euro euro(amount);

    std::cout << amount << " гривень = " << hryvnia.toEuro() << " Ївро\n";
    std::cout << amount << " гривень = " << hryvnia.toDollar() << " долар≥в\n";
    std::cout << amount << " гривень = " << hryvnia.toPLN() << " злотих\n";

    std::cout << amount << " Ївро = " << euro.toEuro() << " Ївро\n";
    std::cout << amount << " Ївро = " << euro.toDollar() << " долар≥в\n";
    std::cout << amount << " Ївро = " << euro.toPLN() << " злотих\n";

    return 0;
}
