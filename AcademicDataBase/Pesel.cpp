#include "Pesel.h"

int Pesel::parseToInteger(char digit)
{
	return int(digit) - 48;
}
int Pesel::controlCoefficient(int i)
{
	int mod = i % 4;
	int coeff = 0;
	if (mod == 0) coeff = 9;
	if (mod == 1) coeff = 7;
	if (mod == 2) coeff = 3;
	if (mod == 3) coeff = 1;
	return coeff;
}
bool Pesel::isValid()
{
	if (nr.empty() || nr.size() != 11)
		return false;
	int control_sum = 0;
	for (auto i = 0; i < nr.size() - 1; ++i)
		control_sum += controlCoefficient(i) * parseToInteger(nr[i]);
	return control_sum % 10 == parseToInteger(nr[nr.size() - 1]);
}



Pesel::~Pesel()
{
}
