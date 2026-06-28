//Multi- Level inheritance
#include<iostream>
#include<sting>
using namespace std;

class Animal{
public:
  void eat(){
    cout<<"Eating..."<<endl;
  }
  void sleep(){
    cout<<"Sleeping..."<<endl;
  }
  void breathe(){
    cout<<"Breathing..."<<endl;
  }
  void run(){
    cout<<"Running..."<<
  }
};

class Mammal:public Animal{
public:
  string bloodType = "Warm Blooded";
  Mammal(){
    cout<<"I am a mammal"<<endl;
  }
  
};

class  Dog:public Mammal{
public:
    void bark(){
      cout<<"Barking..."<<endl;
    }
    
};

int main(){
  Dog d1;

  d1.eat();
  d1.sleep();
  d1.breathe();
  d1.bark();
  cout<<d1.bloodType<<endl;
  cout<<d1.legs;
}