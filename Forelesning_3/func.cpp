#include "../std_lib_facilities.h"
#include "header.h"

/*
void init_day(Date& x, int y, int m, int d){
  x.year = y;
  x.month = m;
  x.day = d;
}*/

Date::Date(int y, int m, int d){
  year = y;
  month = m;
  day = d;

  // if(!check()){
  //   throw Invalid_date();
  // }
}

Month int_to_month(int x){
  if(x < jan || x > Month::dec){
    // Vi skriver Month::dec fordi dec finnes allerede i ::std
    error("Bad month!");
  }
  return Month(x);
}
