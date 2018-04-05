#include <iostream>
#include <string>
using namespace std;

enum Month{jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

static string month_name[13] = {
  "NULL",
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December"
};

class Date{
public:
  Date();
  Date(int, Month, int);
  int tomorrow_day(Date);
  string next_month(Date);

private:
  int day;
  Month month;
  int year;
};
