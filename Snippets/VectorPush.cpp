#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Company{
public:
  string name;
};

int main(){
  // Uten pekere:
  Company a;
  a.name = "Elkjop";
  vector<Company> v;
  v.push_back(a);

  // Med pekere (smart metode):
  Company b;
  b.name = "Elkjop";
  Company* c = &b;
  vector<Company*> v2;
  v2.push_back(c);

  // Med pekere (ikke smart metode):
  Company* d = new Company;
  d->name = "Elkjop";
  vector<Company*> v3;
  v3.push_back(d);
  delete d;

  // Printe ut:
  cout << v[0].name << endl;
  cout << v2[0]->name << endl;
  cout << v3[0]->name << endl;
  return 0;
}
