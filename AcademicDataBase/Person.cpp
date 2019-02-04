#include "Person.h"
#include <iomanip>

std::string Person::toString(const char c_str[])
{
    return std::string{ c_str };
}
std::ostream& operator<<(std::ostream& os, const Person & p)
{
    const int WIDTH = 12;
    os  << std::left << std::setw(WIDTH) << p.name
        << std::setw(WIDTH) << p.surname
        << std::setw(2*WIDTH) << p.address;
    if (p.sex == Sex::female)
        os << std::setw(WIDTH) << "female";
    else
        os << std::setw(WIDTH) << "male";
    os << std::setw(WIDTH) << p.pesel;
    return os;
}
bool Person::operator<=(const Person & other)
{
	return false;
}
bool operator==(Person& first , Person& second)
{
	return first.getPesel() == second.getPesel();
}
Person::Person(const Person & c)
    : name( c.getName()),
	     surname( c.getSurname() ),
	     address( c.getAddress() ),
	     sex( c.getSex() ),
	     pesel( c.getPesel() ) {}

Person::Person( const char name[],
                const char surname[],
                const char address[],
                Sex sex,
                Pesel pesel)
    : name(toString(name)),
	     surname(toString(surname)),
	     address(toString(address)),
	     sex(sex),
	     pesel(pesel) {}
