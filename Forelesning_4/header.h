#include "../std_lib_facilities.h"

namespace Chrono{
  class Date{
    public:
      enum Month{jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
      class Invalid_Date{};

      Date(int yy, Month mm, int dd);
      Date();

      // Non-modifying operations:
      int day() const{
        return d;
      }

      Month month() const{
        return m;
      }

      int year() const{
        return y;
      }

      // Modifying operations:
      void add_day(int n);
      void add_month(int n);
      void add_year(int n);

    private:
      int d;
      Month m;
      int y;
  };
};
