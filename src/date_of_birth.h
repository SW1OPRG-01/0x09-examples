#ifndef DATE_OF_BIRTH
#define DATE_OF_BIRTH

class DateOfBirth {
  public:
    DateOfBirth();
    DateOfBirth(int year, int month, int day);
  void printDateOfBirth();
  private:
    int _year;
    int _month;
    int _day;
};

#endif