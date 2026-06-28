#include<iostream>
using namespace std;

// Access Modifiers - keywords that specify the accessibility of the class members/properties.

// - private: data & methods accessible inside class. (Sensitive)
// - public: Data & methods accessible to everyone
// - protected: data & methods accessible inside class & to its derived class

class Student {
private://(By default private hota hai, likhe nahi hai)

    //Properties
    string name;

public:          //In Public we can access the properties of the class.
    float cgpa;

    //Methods
    void getPercentage(){
      cout << (cgpa * 10) << "% \n";
    }
};

int main(){
    Student s1; //Object
    s1.name = "Prince";
     s1.cgpa = 9.0;   //error: bcz name & cgpa are private properties of the class Student.
    cout << sizeof(s1) << endl;    //Size of the object is 1 byte because there is no data in the object.
    cout << s1.name << endl;    //Dot Operator is used to access the properties of the object.
    return 0;
}