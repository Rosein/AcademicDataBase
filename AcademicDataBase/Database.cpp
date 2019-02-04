#include "Database.h"

void Database::add(Person & person)
{
	allPeople.emplace_back(std::make_unique<Person>(person));
}

std::ostream& Database::operator<<(std::ostream& os)
{

}
Database::Database()
{
}

Database::~Database()
{
}
