#include <iostream>
#include "person.h"
#include "date_of_birth.h"

int main(int argc, char* argv[]) {

  Person harry = Person("Harry Potter", 1980, 7, 31);

  DateOfBirth dob = DateOfBirth(1978, 4, 1);
  Person fred = Person("Fred Weasley", dob);
  Person george = Person("Geroge Weasley", dob);

  std::cout << harry.getName() << " is born @ ";
  harry.printBirthday();

  std::cout << fred.getName() << " is born @ ";
  fred.printBirthday();

  std::cout << george.getName() << " is born @ ";
  george.printBirthday();

  return 0;
}