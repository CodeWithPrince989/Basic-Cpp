//Inheritance
#include <iostream>
#include <string>
using namespace std;

// Mode of Inheritance - Public, Private, Protected.
// Public - Public members of the base class become public members of the derived class.

// Private - Public members of the base class become private members of the derived class.
// Private members of the base class are never accessible to the derived class.

// Protected - Public members of the base class become protected members of the derived class.
// Protected members of the base class become protected members of the derived class.






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

// class Fish : public Animal {    //Inheritance - Fish is a child class of Animal.
// public:
//   int fins;

//   void swim(){
//     cout << "I can swim!" << endl;
//   }

class Fish : protected Animal {      
public:
  int fins;

  void swim(){
    eat();          //Protected members of the base class become protected members of the derived class.
    cout << "I can swim!" << endl;
  }
};

int main(){
  Fish f1;
  f1.fins = 4;
  f1.swim();
  cout << f1.fins << endl;
  f1.eat();
  return 0;
}