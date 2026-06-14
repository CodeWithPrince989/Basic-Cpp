#include <iostream>
using namespace std;

int main() {
    int n=10829;
    int digSum=0;

    while(n>0){
        int lastdigit=n%10;
        digSum+= lastdigit;
        n=n/10;
    }
    cout<<"Sum = "<<digSum<<endl;
    return 0;
}