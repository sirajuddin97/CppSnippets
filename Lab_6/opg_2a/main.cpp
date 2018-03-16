#include "main.h"

int main(){
  try{
    Contact c1("Sira", "sira@sira", 1234);
    Contact c2("Asjad", "asjad@asjad", 9999);
    my_contacts.push_back(c1);

    cout << c1;
    // cin >> c2;
  }
  catch(writefile_error){
    cerr << "Error: Could not create file!" << endl;
  }
  return 0;
}
