#pragma once

class Counter
{
private:
	int num = 1;

public:
	Counter(int num1) { this->num = num1; }

	void calc(char cmnd);
	int get_num();

};

void calculations(Counter general);

