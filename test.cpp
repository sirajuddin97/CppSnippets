#include "std_lib_facilities.h"

class NotInt{};

int main()
  try{
    int tall;
    cout << "Skriv et tall: ";
    cin >> tall;
    if(!cin) throw NotInt();
    cout << tall << endl;

    keep_window_open();
  }
  catch(NotInt){
    cerr << "yo" << endl
  }
  return 0;
}
