#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
  public:
    Person(std::string name);
    void setName(std::string name);
    std::string getName();
  private:
    std::string name;
};

#endif