#include "main.h"

Date::Date(){}
Date::Date(int d, Month m, int y){
  day = d;
  month = m;
  year = y;
}

int Date::tomorrow_day(Date today){
  // switch(today.month){
  //   case jan: case mar: case may: case jul: case aug: case Month::oct: case Month::dec:{
  //
  //     break;
  //   }
  // }

  int tomorrow = today.day + 1;
  return tomorrow;
}

string Date::next_month(Date today){
  int next;
  if(today.month == Month::dec){
    next = jan;
  }
  else{
    next = today.month + 1;
  }
  return month_name[next];
}
