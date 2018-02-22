#include "header.h"

namespace Chrono{
  Date::Date(int yy, Date::Month mm, int dd){
    y = yy;
    m = mm;
    d = dd;

    if(!is_date(yy, mm, dd)){
      throw Invalid_Date();
    }
  }

  Date& default_date(){
    static Date dd(2001, Date::jan, 1);
    return dd;
  }

  Date::Date(){
    y = default_date().year();
    m = default_date().month();
    d = default_date().day();
  }

  void Date::add_day(int n){
    // lag selv
  }

  void Date::add_month(int n){
    // lag selv
  }

  void Date::add_year(int n){
    if(m == feb && d = 29 && !leapyear(n + y)){
      m = mar;
      d = 1;
    }
    y = y + n;
  }

  bool is_date(int yy, Date::Month mm, int dd){
    int days_in_month = 31;

    switch(mm){
      case Date::feb:{
        days_in_month = (leapyear()) ? 29 : 28;
        break;
      }
      case Date::apr: case Date::jun: case Date:: sep: case Date::nov:{
        days_in_month = 30;
        break;
      }
    }
    if(d <= 0) return false;
    if(days_in_month < dd) return false;
    return true;
  }

  bool leapyear(int y){
    // lag selv
  }

  bool operator==(const Date& a, const Date& b){
    return a.year() == b.year()
      && a.month() == b.month()
      && a.day() == b.day();
  }

  bool operator!=(const Date& a, const Date& b){
    return !(a == b);
  }

  // operator<<(...){
    // lag selv
  // }

  istream& operator>>(istream& is, Date& d){
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch3 >> d >> ch4; // (2017, 2, 20)
  }
}
