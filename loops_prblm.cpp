#include <iostream>
using namespace std;

int main() {
    int n=10829;
    int digSum=0;

    // while(n>0){
    //     int lastdigit=n%10;
    //     digSum+= lastdigit;
    //     n=n/10;
    // }
    // cout<<"Sum = "<<digSum<<endl;
    
    //odd digit sum
    // while(n>0){
    //     int lastdigit=n%10;
    //     if(lastdigit%2!=0){
    //         digSum += lastdigit;
    // }
    // n = n/10;
    // }
    // cout<<"Sum = "<<digSum<<endl;


    //Reverse using while loop
    int rev=0;
    while(n>0){
        int lastdigit=n%10;
        rev=(rev*10)+lastdigit;
        n=n/10;
    }
    cout<<"Reverse = "<<rev<<endl;

    //reverse a given number & print the result
    res = 0;
    while(n>0){
        int lastdigit=n*10;
        res=(res*10)+lastdigit;
        n=n/10;
    }
    return 0;
}