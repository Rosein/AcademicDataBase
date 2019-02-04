#pragma once
#include<vector>
#include <memory>

#include"Student.h"
#include"Employee.h"

using PersonPtr = std::unique_ptr<Person>;
class Database
{
	std::vector<PersonPtr> allPeople;
public:
	std::ostream& operator<<(std::ostream& os);
	void add(Person & person);
	Database();
	~Database();
};

