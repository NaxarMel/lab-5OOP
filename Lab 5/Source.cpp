#include <iostream>
#include "Currency.h"
#include "Hryvnia.h"
#include "Euro.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double amount;
    std::cout << "������ �����: ";
    std::cin >> amount;

    Hryvnia hryvnia(amount);
    Euro euro(amount);

    std::cout << amount << " ������� = " << hryvnia.toEuro() << " ����\n";
    std::cout << amount << " ������� = " << hryvnia.toDollar() << " ������\n";
    std::cout << amount << " ������� = " << hryvnia.toPLN() << " ������\n";

    std::cout << amount << " ���� = " << euro.toEuro() << " ����\n";
    std::cout << amount << " ���� = " << euro.toDollar() << " ������\n";
    std::cout << amount << " ���� = " << euro.toPLN() << " ������\n";

    return 0;
}
