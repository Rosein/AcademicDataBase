#pragma once
#include "Person.h"
#include <vector>
#include <memory>
class Student : public Person
{
public:
	const int index;
	bool operator<=(const Student&);
};

bool Student::operator<=(const Student& other)
{
	return index <= other.index;
}

class Employee : public Person
{
	enum class  Sex { male, female };
	Sex sex;

};

using PersonPtr = std::unique_ptr<Person>;
class University
{
	std::vector<PersonPtr> allPeople;
public:
	std::ostream& operator<<(std::ostream&);
	void addStudent(Student & student)
	{
		allPeople.emplace_back(student);
	}
};

std::ostream& University::operator<<(std::ostream& os)
{
	
}