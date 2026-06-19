//Selection Sorting
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
  //0(n*log(n) is better than 0(n^2)
    for(int i = 0; i < n-1; i++){
        int min = i;
        //loop for finding the minimum element in the array
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //swapping the minimum element with the first element
      swap(arr[i], arr[min]);
    }
    //printing the sorted array
    printf(arr, n);
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    selectionSort(arr, 10);
    }
