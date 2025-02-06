#include "person.h"
#include <iostream>

Person::Person(const std::string& name, int age) : name(name), age(age)
{
}

Person::~Person()
{
}

void Person::displayInfo() const
{
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}