#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 3, 4, 5, 6, 7, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(int);

    cout << linearSearch(arr, n, 20) << endl;
    return 0;
}