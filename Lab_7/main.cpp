#include "main.h"

int main(){
  Date d;
  Date today(01, Month::dec, 2018);
  cout << "Day tomorrow is: " << d.tomorrow_day(today) << endl;
  cout << "Next month is: " << d.next_month(today) << endl;

  return 0;
}
