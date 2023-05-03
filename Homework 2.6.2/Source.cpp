#include "Source.h"
#include <iostream>

	void Counter::calc(char cmnd)
	{
		this->num;
		if (cmnd == 45) { this->num--; }
		else if (cmnd == 43) { this->num++; }
	}

	int Counter:: get_num() {
		return this->num;
	}

	void calculations(Counter general) {
	char sign=0;
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> sign;
		general.calc(sign);
		if (sign == 61) {
			std::cout << "равно: ";
			std::cout << general.get_num() << std::endl;
		}
	} while (sign != 120);

	std::cout << "До свидания" << std::endl;
}