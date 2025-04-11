#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "date_of_birth.h"

class Person {
  public:
    Person(std::string name, int year, int month, int day);
    Person(std::string name, DateOfBirth dob);
    void setName(std::string name);
    std::string getName();
    void printBirthday();
  private:
    std::string _name;
    DateOfBirth _dob;
};

#endif