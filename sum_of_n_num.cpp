#include <iostream>
using namespace std;

int main() {
    //Sum of N Natural Numbers
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }cout<< "Sum of N Natural Numbers is: "<<sum<<endl;
    return 0;
}