#include<iostream>
using namespace std;

int main(){
    int arr[] = {5, 4, 3, 9, 12};
    int n = sizeof(arr)/sizeof(int);   //used to find no. of elements in array
  
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
          cout<<"assigning val "<<arr[i]<<" to max\n";
        }
    }
    cout<<max<<endl;
    return 0;
}