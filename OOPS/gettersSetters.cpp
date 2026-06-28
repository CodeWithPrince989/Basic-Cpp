#include<iostream>
#include<string> 
using namespace std;

class Student {
private: // Good practice to explicitly state private access
    string name;
    float cgpa;

public:
    void getPercentage(){
        cout << (cgpa * 10) << "% \n";
    }

    // Setters
    void setName(string nameVal){ // Fixed: 'String' changed to 'string'
        name = nameVal;
    }

    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    // Getters
    string getName(){
        return name;
    }

    float getCgpa(){
        return cgpa;
    }
};

int main(){
    Student s1; 
    
    // Fixed: Removed '=' to correctly call the methods
    s1.setName("Prince");
    s1.setCgpa(9.5);

    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;

    return 0;
}
