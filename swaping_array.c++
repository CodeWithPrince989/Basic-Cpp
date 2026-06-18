#include <iostream>
using namespace std;

int main(){
    //Swaping Array
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    int start = 0, end = n-1;
    while(start < end){
      swap(arr[start], arr[end]);
      arr[start] = arr[end];
      arr[end] = temp;
      
      //swap
      start++; 
      end--;

      //Binary Search
      int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
      int n = sizeof(arr)/sizeof(int);

      cout << binSearch(arr, n, 12) << endl;
      
      return 0;
      
    }
}