#pragma once
#include<string>
#include<ostream>
class Pesel
{
    std::string nr;
    int parseToInteger(char);
    int controlCoefficient(int);
public:
    bool isValid();
    friend bool operator==(Pesel, Pesel);
    friend std::ostream& operator<<(std::ostream&, const Pesel & p);
    Pesel(const char nr[]) : nr(nr) {}
    ~Pesel() {}
};
