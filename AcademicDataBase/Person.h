#pragma once
#include "Pesel.h"
#include <string>
#include <iostream>
enum class Sex { male, female };

class Person
{
	std::string name;
	std::string surname;
	std::string address;
	Sex sex;
	Pesel pesel;
	std::string toString(const char c_str[]);
public:
	Person() = delete;
	Person( const char name[],
			const char surname[],
			const char address[],
			Sex sex,
			Pesel pesel);
	virtual std::ostream& operator<<(std::ostream&);
	virtual ~Person() {}
	void setAddress(const char new_address[]) { address = toString(new_address); }
	virtual bool operator<=(const Person &);
};

