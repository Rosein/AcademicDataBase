#pragma once
#include "Pesel.h"
#include <string>
#include <iostream>



class Address
{
	std::string street;
	unsigned int nr;
};
class Person
{
	std::string name;
	std::string surname;
	Address address;
public:
	virtual ~Person() {}
	bool operator<=(const Person & other);
};

bool Person::operator<=(const Person & other)
{
	return false;
}