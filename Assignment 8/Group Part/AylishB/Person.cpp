#include <string>
#include "Person.hpp"

//Constructor that passes initial variables to set methods:
Person::Person(std::string nameVal, double ageVal)
{
  name = nameVal;
  age = ageVal;
}

//Get methods:
std::string Person::getName()
{
  return name;
}

double Person::getAge()
{
  return age;
}

