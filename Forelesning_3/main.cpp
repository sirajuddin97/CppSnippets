#include "../../std_lib_facilities.h"
#include "header.h"

int main(){
  Date today;
  // today.year = 2018;
  // today.month = 02;
  // today.day = 13;
  init_day(today, 2018, 02, 13);

  cout << today.day << "/" << today.month << "-" << today.year << endl;

  Date tomorrow;
  tomorrow.year = today.year;
  tomorrow.month = tomorrow.month;
  tomorrow.day = today.day + 1;

  return 0;
}
