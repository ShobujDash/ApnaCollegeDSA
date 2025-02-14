#include <iostream>
using namespace std;


// funtion definition
// int printHello(){
//   cout << "hello\n";
//   return 3;
// }


// // sum of 2 number
// int sum(int a , int b){
//   int s = a + b;
//   return s;
// }


// int sumN(int n){
//   int sum = 0;

//   for (int i = 1; i <=n ; i++){
//     sum += i;
//   }

//   return sum;
// }

// calculate N factorial
int factorial(int n){
  int fact = 1;

  for (int i = 1; i <=n ; i++){
    fact *= i;
  }

  return fact;
}


int main(){

 // funtion call / invoke
 //  printHello();

//  cout << sum(10, 5) << endl;

 cout << factorial(5) << endl;
 return 0;
}