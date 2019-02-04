#include "Person.h"


std::string Person::toString(const char c_str[])
{
	return std::string{ c_str };
}
std::ostream& Person::operator<<(std::ostream& os)
{
	os << name
	   << surname
	   << address
	   << (sex == Sex::female)? "female" : "male"
	   << pesel.show() ;
	return os;
}
bool Person::operator<=(const Person & other)
{
	return false;
}
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
Person::~Person()
{
}
