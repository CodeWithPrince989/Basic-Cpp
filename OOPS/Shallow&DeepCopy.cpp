// Shallow & Deep Copy - 
// static memory vese ke vese copy ho jata hai, lekin heep ki dynamic allocated ki baat karte hai copy nahi banti uska sirf address copy ho jata hai.

// Shallow Copy Copies references to original array. But array remains same.
// Deep Copy Created a brand new copy of the aaray.
// Compiler by default creates a shallow copy.
// We need to define own copy constructor when deep copy is needed i.e. when class contains pointers to synamically allocated memory..
#include <iostream>
#include <string>
using namespace std;

class Car{
  public:
    string name;
    string color;
    int *mileage;

  Car(string name, string color){
    this->name = name;
    this->color = color;
    mileage = new int;      //heap memory me mileage allocate ho gayi hai
    // *mileage = 20;          //mileage ki value 20 ho gayi hai
     }

  Car(Car &originalObj){
    cout << "Coping original to new..\n" << endl;
    name = originalObj.name;
    color = originalObj.color;
    mileage = originalObj.mileage;
  }
};

int main(){
  Car c1("BMW", "Black");

  Car c2(c1);    //c1 ki values c2 me copy ho jayengi
  cout << c2.name << endl; 
  cout << c2.color << endl; 
  cout << c2.mileage << endl;
  *c2.mileage = 10;
  cout << *c1.mileage << endl;    //c1 ki mileage ki value change ho gayi hai
  return 0;
}