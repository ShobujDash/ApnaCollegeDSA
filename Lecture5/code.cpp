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

//   for (int i = 1; i <=n ; i++)
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


// caclulate ncr binomial coeffcient for n & r 
int nCr(int n , int r){
  int fac_n = factorial(n);
  int fac_r = factorial(r);

  int fact_nmr = factorial(n - r);

  return fac_n / (fac_r * fact_nmr);
}




// // sum of digite
// int subOfDigit(int num){
//   int digitSum = 0;
//   while (num > 0)
//   {
//     int lastDig = num % 10;
//     num /= 10;
//     digitSum += lastDig;

//   }

//   return digitSum;
// }



// void fun(){
//   int x = 25;
//   cout << "x  " << x << endl;
// }





int main(){

 // funtion call / invoke
 //  printHello();

//  cout << sum(10, 5) << endl;

//  cout << factorial(5) << endl;
 cout << nCr(5,2) << endl;

//  cout << subOfDigit(159) << endl;

//  fun();


 return 0;
}