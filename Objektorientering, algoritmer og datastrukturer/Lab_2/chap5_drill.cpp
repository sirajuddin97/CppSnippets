#include "../../std_lib_facilities.h"

int main(){
  try{
    int res = 7;
    vector<int> v(10);
    v[5] = res;
    cout << "Success!\n";

    // hoppet over drill
    char ch; cin >> ch;
    return 0;
  }
  catch(exception& e){
    cerr << "Error: " << e.what() << '\n';
    char ch; cin >> ch;
    return 1;
  }
  catch(...){
    cerr << "Oops: unknown exception!\n";
    char ch; cin >> ch;
    return 2;
  }
}
