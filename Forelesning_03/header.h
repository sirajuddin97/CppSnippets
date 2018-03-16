enum Day{
  monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday
};

enum Month{
  jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

class Date{
public:
  class Invalid_date{};
  Date(int y, int m, int d);

  int getMonth(){
    return month;
  }

  int getYear(){
    return year;
  }

  int getDay(){
    return day;
  }

private:
  int year;
  int month;
  int day;

  bool check(){
    // yoo
  }
};

/*
struct Date{
  int year;
  int month;
  int day;

  Date(int y, int m, int d);
}; */

// void init_day(Date& x, int y, int m, int d);
Month int_to_month(int x);
