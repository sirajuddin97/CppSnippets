#include <iostream>
#include <string>
using namespace std;

class Vehicle{
public:
  Vehicle(string c) : color(c){}
  virtual void print() = 0;

private:
  string color;
};

class Car : public Vehicle{
public:
  Car(string c, int pn) : Vehicle(c), plate_nr(pn){}
  void print();
  void new_plate(int pn) { plate_nr = pn; }

private:
  int plate_nr;
};

class Bike : public Vehicle{
public:
  Bike(string c, int ts) : Vehicle(c), tyre_size(ts){}
  void print();

private:
  int tyre_size;
};

int main(){
  Vehicle* liste[10];
  liste[0] = new Car("Black", 1234);
  liste[1] = new Car("White", 9876);
  liste[2] = new Bike("Red", 17);

  liste[0]->print();
  liste[1]->print();
  liste[2]->print();

  return 0;
}

void Vehicle::print(){
  cout << "Color: " << color << endl;
}

void Car::print(){
  Vehicle::print();
  cout << "Plate number: " << plate_nr << endl << endl;
}

void Bike::print(){
  Vehicle::print();
  cout << "Tyre size: " << tyre_size << endl << endl;
}
