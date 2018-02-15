#include "../std_lib_facilities.h"
#include "header.h"

Month operator++(Month& m){
  if(m == Month::dec){
    m = jan;
  }
  else{
    m = Month(m + 1);
  }
  return m;
}

Month operator++(Month& m, int){
  // vi skriver int bare for å skille de to funksjonene i kompilatoren. ekstra parameter blir ikke brukt i koden.
  Month m_old = m;

  if(m == Month::dec){
    m = jan;
  }
  else{
    m = Month(m + 1);
  }
  return m_old;
}

string month_tlb[] = {"NULL", "January", "February", "March", "April", "May", "June"}; // osv

ostream& operator<<(ostream& os, Month m){
  return os << month_tlb[m];
}

int main(){
  try{
    // Date today;
    // today.year = 2018;
    // today.month = 02;
    // today.day = 13;

    // Date tomorrow;
    // tomorrow.year = today.year;
    // tomorrow.month = tomorrow.month;
    // tomorrow.day = today.day + 1;

    // cout << today.day << "/" << today.month << "-" << today.year << endl;
    // init_day(today, 2018, 02, 13);

    Date today(2018, 02, 13);
    Month m = int_to_month(4);
    cout << ++m << endl;
    cout << m << endl;

    cout << today.getDay() << "/" << today.getMonth() << "-" << today.getYear() << endl;
  }
  catch(Date::Invalid_date){
    cerr << "Invalid date!" << endl;
  }
  catch(exception& e){
    cerr << e.what() << endl;
  }
  return 0;
}
