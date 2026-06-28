//Copy Constructor -- Special Constructor (default) used to copy values from one object into another.

#include <iostream>
#include <string>
using namespace std;

class Car{
  public:
    string name;
    string color;

  Car(string name, string color){
    this->name = name;
    this->color = color;
  }
};

int main(){
  Car c1("BMW", "Black");

  Car c2(c1);    //c1 ki values c2 me copy ho jayengi
  cout << c2.name << endl;    //BMW
  cout << c2.color << endl;  //white
  return 0;
}