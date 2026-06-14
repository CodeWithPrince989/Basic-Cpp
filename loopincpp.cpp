#include <iostream>
using namespace std;

int main() {
    // Loops in cpp => for, while, do-while 
    // for loop => for(initialization; condition; increment/decrement) { // code to be executed }
    for (int i = 0; i < 5; i++){
        cout << "Hello World" << endl;
    }
    //while loop => while(condition) { // code to be executed }
    int i = 0;
    while (i < 5){
        cout << "Hello World" << endl;
        i++;
    }
    // do-while loop => do { // code to be executed } while(condition);
    int j = 0;
    do
        cout << "Hello World" << endl;
        j++;
    while (j < 5);
    // break and continue statements    
    for (int i = 0; i < 5; i++){
        if (i == 2){
            break;
        }
        cout << i << endl;
    }
    for (int i = 0; i < 5; i++)
         if (i == 2){
            continue;
        }
        cout << i << endl;
    }
