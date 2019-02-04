#pragma once
#include<string>
#include<ostream>
class Pesel
{
	std::string nr;
	int parseToInteger(char);
	int controlCoefficient(int);
public:
	bool isValid();
	std::ostream& operator<<(std::ostream&);
	Pesel(const char nr[]) : nr(nr) {}
	~Pesel() {}
};
