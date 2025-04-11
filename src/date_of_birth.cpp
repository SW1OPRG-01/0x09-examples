#include "date_of_birth.h"
#include <iostream>

DateOfBirth::DateOfBirth() { }

DateOfBirth::DateOfBirth(int year, int month, int day) {
  _year = year;
  _month = month;
  _day = day;
}

void DateOfBirth::printDateOfBirth() {
  std::cout << _year << "-" 
    << (_month < 10 ? "0" : "") << _month 
    << "-" << (_day < 10 ? "0" : "") << _day 
    << std::endl;
}