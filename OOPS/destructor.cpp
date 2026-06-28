//Destructor - Deallocate Memory
// jub object bhi scope se bahar jati hai to destructor bhi auto. create

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
    *mileage = *original.mileage;
     }

     ~Car{
        cout << "deleting object..\n";
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

  return 0;
}