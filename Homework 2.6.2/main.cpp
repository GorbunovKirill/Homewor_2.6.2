#include <iostream>
#include <Windows.h>
#include "Source.h"




int main() {
	int num1;
	std::string ask;

	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���:  ";
	std::cin >> ask;
	if (ask == "��") {
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> num1;
	}
	else { num1 = 1; }

	Counter first(num1);

	calculations(first);

	return 0;

}