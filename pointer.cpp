//Pointer in Cpp
#include <iostream>
using namespace std;


//Pass By Value
void changeA(int a){
    a = 20;
    cout << "Value of a: " << a << endl;
}

//Pass By Reference
void changeA(int *ptr){
  *ptr = 20;
  cout << "Value of a: " << *ptr << endl;
}

int main(){
    int a = 10;
    int *p = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Address of a: " << p << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of a: " << *p << endl;

  //dereference operator
    *p = 20;
    cout << "Value of a: " << a << endl;
    cout << "Value of a: " << *p << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of a: " << p << endl;
    cout << "Address of p: " << &p << endl;
    cout << "Size of p: " << sizeof(p) << endl;
    cout << "Size of a: " << sizeof(a) << endl;
    cout << "Size of *p: " << sizeof(*p) << endl;
    cout << "Size of &p: " << sizeof(&p) << endl;
    cout << "Size of &a: " << sizeof(&a) << endl;
    cout << "Size of *&a: " << sizeof(*&a) << endl;
    cout << "Size of *&p: " << sizeof(*&p) << endl; 
    cout << "Size of &*p: " << sizeof(&*p) << endl;
    cout << "Size of &*&p: " << sizeof(&*&p) << endl;
    cout << "Size of *&*p: " << sizeof(*&*p) << endl;  

  //NULL Pointer
    int *ptr = NULL;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Size of ptr: " << sizeof(ptr) << endl;
    cout << "Size of *ptr: " << sizeof(*ptr) << endl;
    cout << *ptr << "\n"; //Segmentation fault

    //Pass By Value: when parameter is passed by value, a copy of the variable is created and passed to the function.
    int a = 10;
    changeA(a);
    cout << "Value of a: " << a << endl;

  //Pass By Reference: when we pass the reference of the variable to the function, the original variable is passed to the function.


  //Reference Variable
    int a = 10;
    int &b = a;    //a & b refer to the same memory location
    changeA(&a);
    cout << "Value of a: " << a << endl;



  //Practice Problem 1
      int x = 5, y = 10;
      int *ptr = &x;, *ptr2 = &y;
      *ptr = 10;  //x = 10
      ptr = ptr2; //ptr = &y  
      *ptr = 20;  //y = 20
      cout << x << " " << y << endl;
      cout << *ptr << " " << *ptr2 << endl;
      cout << ptr << " " << ptr2 << endl;
      cout << &x << " " << &y << endl;
      cout << &ptr << " " << &ptr2 << endl;
      cout << *&ptr << " " << *&ptr2 << endl;

  //Practice Problem 2
      int *ptr = 0;
      cout << ptr << "\n";
      cout << *ptr << "\n";
    
    return 0;
}