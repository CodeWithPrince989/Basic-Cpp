//Memory Leak in CPP
#include<iostream>
using namespace std;

void func(){
    int *ptr = new int;
    *ptr = 1100;
    cout<< "ptr points to "<< *ptr<<endl;  
}

int main(){
    int *x = func();
    cout<< "x points to "<< *x<<endl;
    return 0;
}