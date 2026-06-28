//Constructor --- IMPORTANT
// Special Method invoked automatically at time of object creation. Used for Initialisation.
// -- Same name as class name, Constructors don't have return type.,  Constructors are only called once, at object creation.,  Memory allocation happens when constructor is called.

// this is a special pointer in c++ that is a pointer to the object which invokes the member function.

// this->prop is same as *(this).prop

// first type of constructor is default constructor that is non parameterised constructor.

// second type of constructor is parameterised constructor. in this we pass parameters to the constructor. overloading is possible in this type of constructor.   

// third type of constructor is copy constructor.

#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    sring color;

public:
    Car0;
    Car(sting nameValue, string colorVal){      // Constructor  
        cout << "Constructor Called\n";
        this->name = name;       // (*this).name = name;
        this->color = color;       
    }

    //if we don't create constructor, compiler creates default constructor

    void start(){
        cout << "Car Started..\n";
    }
    void stop(){
        cout << "Car Stopped\n";
    }
    
};

int main({
    Car c1("BMW", "Black");
    return 0;  
})
