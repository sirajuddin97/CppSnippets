#include "main.h"

int main(){
  int x, y;
  int n1, n2;
  string filename;

  try{
    /*
    cout << "Enter file name: ";
    cin >> filename;
    cout << "Enter two ints: ";
    cin >> x >> y;

    write_two_ints(filename, x, y);
    read_two_ints(filename, n1, n2);

    cout << "Reading " << filename << ":" << endl;
    cout << n1 << " " << n2 << endl;
    */

    vector<int> v;
    char terminator = 'q';
    read_file(v, terminator);
    read_user_input(v, terminator);
    write_to_file(v, terminator);

    for(int i = 0; i < v.size(); i++){
      cout << v[i] << endl;
    }
  }
  catch(int x){
    switch(x){
      case -1:{
        cerr << "Can't write file " << filename << endl;
        break;
      }
      case -2:{
        cerr << "Can't read file " << filename << endl;
        break;
      }
      case -3:{
        cerr << "ist is bad." << endl;
        break;
      }
    }
  }
  return 0;
}
