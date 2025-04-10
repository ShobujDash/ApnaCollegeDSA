#include <iostream>
using namespace std;


int linearSearch(int arr[], int sz, int target){
  for (int i = 0; i < sz; i++){
    if(arr[i] == target){
      return i;
    }
  }

  return -1;
}

void reverseArray(int arr[],int sz){
 int start = 0;
  int end = sz - 1;

  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

}


int main(){

  // int marks[5] = {99,100,54,36,88} ;
  // int size = 5;

  // cout << marks[2] << endl;
  // cout << marks[4] << endl;

  // int sz = sizeof(marks) / sizeof(int);
  // cout << sz << endl;

  /// loop : 0 to size-1
  // for (int i = 0; i < size; i++){
  //   cout << marks[i] << endl;
  // }


  // find smallest/largest in array
  // int numbers[6] = {5, 15, 22, 1, -15, 24};
  // int size = 6;

  // int smallest = INT8_MAX;
  // int largest = INT8_MIN;

  // for (int i = 0; i < size; i++){
  //   // if( numbers[i] <smallest){
  //   //   smallest = numbers[i];
  //   // }

  //   smallest = min(numbers[i], smallest);
  //   largest = max(numbers[i], largest);
  // }

  // cout << "smallest = " << smallest << endl;
  // cout << "Largest = " << largest << endl;

  


  // linear Search
  // int arr[] = {4, 2, 7, 8, 1, 2, 5};
  // int sz = 7;
  // int target = 2;

  // cout << linearSearch(arr, sz, target) << endl;

  


  // Reverse an Array
  int arr[] = {4, 5, 6, 3, 7, 8, 2,4};
  int size = 8;
  reverseArray(arr, size);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
  

  return 0;
}