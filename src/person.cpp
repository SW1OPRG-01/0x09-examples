#include "person.h"

Person::Person(std::string name, int year, int month, int day) : 
  _name(name), 
  _dob(year, month, day) { }

Person::Person(std::string name, DateOfBirth dob) {
  _name = name;
  _dob = dob;
}

std::string Person::getName() {
  return _name;
}

void Person::setName(std::string name) {
  _name = name;
}

void Person::printBirthday() {
  _dob.printDateOfBirth();
}