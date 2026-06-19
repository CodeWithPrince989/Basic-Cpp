//inbuilt Sort
#include <iostream>
using namespace std;



int main(){
  int arr[8] = { 1, 2, 3, 4, 8, 6, 7, 5};
  //ascending order
  sort(arr, arr+8);
  //Decending order
  sort(arr, arr+8, greater<int>());
  
  print(arr, 8);
  return 0;
}