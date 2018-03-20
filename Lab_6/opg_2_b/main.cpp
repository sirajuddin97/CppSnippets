#include "main.h"

int main(){
  try{
    Contact c;
    c.load_contacts();
    c.show_menu();
  }
  catch(invalid_option){
    cerr << "Error: Invalid option. Please try again!" << endl;
  }
  catch(invalid_phone){
    cerr << "Error: Invalid phone number!" << endl;
  }
  catch(writefile_error){
    cerr << "Error: Could not create file!" << endl;
  }
  catch(readfile_error){
    cerr << "Error: Could not read file!" << endl;
  }
  return 0;
}
