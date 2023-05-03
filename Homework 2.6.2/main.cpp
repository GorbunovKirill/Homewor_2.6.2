#include <iostream>
#include <Windows.h>
#include "Source.h"




int main() {
	int num1;
	std::string ask;

	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:  ";
	std::cin >> ask;
	if (ask == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num1;
	}
	else { num1 = 1; }

	Counter first(num1);

	calculations(first);

	return 0;

}