#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number between 2 to N:"<<endl;
    cin >> n;

    for(int i = 2; i <= n; i++){
        if(i%2 == 0){
            cout << i << endl;
        }
    }
    return 0;
}