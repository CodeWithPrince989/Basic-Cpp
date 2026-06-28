// Polymorphism is the ability of objects to take on different forms or behave in differnt ways depending on the context in which they are used.
// Polymorphism is achieved through inheritance and virtual functions in C++.
// it is of 2 Typess: 1. Compile-time polymorphism (function overloading and operator overloading)
// 2. Run-time polymorphism (function overriding)          




//Function Overloading Code
#include<iostream>
#include<string>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }
    void show(double d) {
        cout << "Double: " << d << endl;
    }  
};

class Complex{
  int real;
  int img;

public:
  Complex(int r, int i){
    real = r;
    img = i;
  }
  void showNum(){
    cout<<real<<" + "<<img<<"i"<<endl;
  }
  void operator + (Complex &c2){
    int resReal = this->real + c2.real;
    int resReal = this->img + c2.img;
    Complex c3(resReal, resImg);
    cout << "res = ";
    c3.showNum();
  } 
};

int main(){
  // Print obj1;
  // obj1.show(10);
  // obj1.show("Prince");
  Complex c2(5,6);
  Complex c1(3,4);
  c1.showNum();
  c2.showNum();
  Complex c3 = c1 + c2;
  c3.showNum();
  return 0;
}




