#include <iostream>
using namespace std;

void multipleBy2(int &a, int &b, int &c){
    a *= 2;
    b *= 2;
    c *= 2;
}

int main(){
    // int x;
    // int *ptr;
    // x = 7;
    // ptr = &x;
    // cout << *ptr;
    // int x = 1, y = 3, z = 7;
    // multipleBy2(x, y, z);
    // cout << "x=" << x << ", y=" << y << ", z=" << z;

    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char *ptr2 = &ch;

    ptr2 += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
    
    return 0;
}