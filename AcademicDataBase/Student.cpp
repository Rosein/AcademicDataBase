#include "Student.h"

bool Student::operator<=(const Student& other)
{
	return index <= other.index;
}

Student::Student()
{
}


Student::~Student()
{
}
