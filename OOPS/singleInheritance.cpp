//Single Inheritance
#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
  string color;
  void eat() {
    cout << "I can eat!" << endl;
  }

  void breath(){
    cout << "I can breath!" << endl;
  }
};

class Fish : public Animal {      
public:
  int fins;

  void swim(){
    cout << "I can swim!" << endl;
  }
};

int main(){
  Fish f1;
  f1.swim();
  f1.eat();
  f1.breath();
  return 0;
}