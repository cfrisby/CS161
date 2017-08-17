#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
//Person class declaration
class Person
{
  private:
    std::string name;
    double age;

  public:
    //Person(); //No default constructor?
    Person(std::string nameVal, double ageVal);
    std::string getName();
    double getAge();
};
#endif
