#pragma once
#include "Pesel.h"
#include <string>
#include <iostream>
enum class Sex { male, female };

class Person
{
protected:
    std::string name;
    std::string surname;
    std::string address;
    Sex sex;
    Pesel pesel;
    std::string toString(const char c_str[]);
public:
    Person() = delete;
    Person(Pesel pesel) : pesel(pesel) {}
    Person( const char name[],
		          const char surname[],
		          const char address[],
		          Sex sex,
		          Pesel pesel);
    Person(const Person &);
    friend std::ostream& operator<<(std::ostream& os, const Person & p);
    virtual ~Person() {}
    void setAddress(const char new_address[]) { address = toString(new_address); }
    std::string getName() const { return name; }
    std::string getSurname() const { return surname; }
    std::string getAddress() const { return address; }
    Sex getSex() const { return sex; }
    Pesel getPesel() const { return pesel; }
    virtual bool operator<=(const Person &);
    friend  bool operator==(const Person&, const Person&);

};

