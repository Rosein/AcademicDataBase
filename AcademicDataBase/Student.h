#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	const int index;
	bool operator<=(const Student&);
	Student();
	~Student();
};

