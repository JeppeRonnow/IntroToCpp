#include "../headers/Country.hpp"

Country::Country() : name("") {}

Country::Country(const string& name) : name(name) {}

string Country::getName() const {
    return name;
}
