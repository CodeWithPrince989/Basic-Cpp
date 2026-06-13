#include <iostream>
using namespace std;

int main() {
    // Implicit Typecasting
    cout<<"Hello C++";
    cout<<(10/3.0)<<endl;
    cout<<(10/3.0)<<endl; //3.3333
    cout<<('B' + 1)<<endl;
    cout<<('a' + 1)<<endl; 
    // bool -> char -> int -> float -> double

    // Explicit(Forced by The Programmer) Typecasting
    cout << (int)('a') << endl;
    float PI = 3.14;
    cout << (int)(PI) << endl;
    cout << (float)(10/3) << endl;
    cout << (char)('A' + 1) << endl; //B
    return 0;
}