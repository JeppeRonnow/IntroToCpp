#ifndef PERSON_H
#define PERSON_H

#pragma once

#include <string>

class Person
{
public:
    Person(const std::string& name, int age);
    ~Person();

    void displayInfo() const;

private:
    std::string name;
    int age;
};

#endif // PERSON_H