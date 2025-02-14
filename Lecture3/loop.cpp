#include <iostream>
using namespace std;

int main(){

  // int count = 1;

  // while (count <=3){
  //   cout << count << " ";
  //   count++;
  // }

  // cout << endl;
  // cout << count << " ";



  // add sum of odd 
  // int n = 10;
  // int oddSum = 0;
  // for (int i = 0; i <=n; i++)
  // {
  //   if(i%2 != 0){
  //     cout << i << " ";
  //     oddSum += i;
  //   }
  // }
  // cout << "odd sum" << oddSum << endl;



  // check if a umber is prime or not
  int n = 8;
  bool isPrime = true;
  for (int i = 2; i <=n-1; i++)
  {
    if(n % 2 == 0){ // non prime
      isPrime = false;
      break;
    }
  }
  if(isPrime == true){
    cout << "Prime no\n";
  }else{
    cout << "Non Prime no\n";
  }

  return 0;
} 