//Virtual Function --> Runtime Polymorphism
//Virtual function are dynamic in nature.
//defined by the keyword "virtual" inside a base class and are declared with a base class and overrridden in a child class.
//A virtual function is called during runtime.

#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout<<"parent class show.."<<endl;
    }
  virtual void display(){
    cout<<"parent class display.."<<endl;
  }
};

class Child : public Parent {
public: 
    void show(){
        cout<<"child class show.."<<endl;
    }
    void hello(){
      cout << "child hello\n";
    }
};

int main(){
  Child child1;
  Parent *p;
  p = &child1;    //Run time binding
  p->hello();      //Virtual Function
  return 0;
}