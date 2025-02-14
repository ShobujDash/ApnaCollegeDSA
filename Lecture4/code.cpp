#include <iostream>
using namespace std;

int main(){
  // int n = 4;

  // for (int i = 1; i <= n;i++){
  //   for (int j = 1; j <= n;j++){
  //     cout << "*" << " ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < n;i++){ // outer 
  //   char ch = 'A';
  //   for (int j = 0; j < n;j++){ // inner start => line start
  //     cout << ch ;
  //     ch = ch + 1;
  //   }
  //   cout << endl;
  // }

  // char num = 'A';
  // for (int i = 0; i < n;i++){ // outer 
  //   for (int j = 0; j < n;j++){ // inner start => line start
  //     cout << num << " ";
  //     num++;
  //   }
  //   cout << endl;
  // }


  // // Triangle Pattern with *
  // int n = 6;
  // for (int i = 0; i < n;i++){ // outer 
  //   for (int j = 0; j < i+1;j++){ // inner start => line start
  //     cout << "* " ;
  //   }
  //   cout << endl;
  // }


  // Triangle Pattern with Number
  // int n = 6;
  // for (int i = 0; i < n;i++){ // outer 
  //   for (int j = 0; j < i+1;j++){ // inner start => line start
  //     cout << i+1 ;
  //   }
  //   cout << endl;
  // }



  // // Triangle Pattern with letter
  // int n = 6;
  // char letter = 'A';
  // for (int i = 0; i < n;i++){ // outer 
  //    char letter = 'A';
  //   for (int j = 0; j < i+1;j++){ // inner start => line start
  //     cout << letter ;
  //     letter++;
  //   }
  //   cout << endl;
  // }


  // // Triangle Pattern with number
  // int n = 6;
  // char letter = 'A';
  // for (int i = 0; i < n;i++){ // outer 
  //    char letter = 'A';
  //   for (int j = 1; j < i+1;j++){ // inner start => line start
  //     cout << j ;
  //   }
  //   cout << endl;
  // }

  // // Reverse Triangle Pattern
  // int n = 4;
  // for (int i = 0; i < n;i++){ // outer 
  //   for (int j = i+1; j >= 0;j--){ // inner start => line start
  //     cout << j << " " ;
  //   }
  //   cout << endl;
  // }


  // // Floyd's Triangle Pattern
  // int n = 4;
  // int num = 1;
  // for (int i = 0; i < n;i++){ // outer 
  //   for (int j = 0; j < i+1;j++){ // inner start => line start
  //     cout << num << " " ;
  //     num++;
  //   }
  //   cout << endl;
  // }


  // // Inverted Triangle Pattern
  // int n = 4;
  // for (int i = 0; i < n;i++){ // outer 
  //   // spaces
  //   for (int j = 0; j < i; j++){ // inner start => line start
  //     cout << " ";
  //   }
  //   //nums
  //   for (int j = 0; j < n-i; j++){ // inner start => line start
  //     cout << i+1;
  //   }
  //   cout << endl;
  // }



  // Pyramid Pattern
        //  1
      // 1  2  1 
    // 1  2  3  2  1
  // 1  2  3  4  3  2  1
  // int n = 8;
  // for (int i = 0; i < n; i++){
  //   // spaces : n-i-1
  //   for (int j = 0; j < n - i - 1; j++){
  //     cout << " ";
  //   }
  //   // nums1
  //   for (int j = 1; j <= i + 1; j++){
  //     cout << j;
  //   }
  //   // nums2
  //   for (int j = i; j >0 ; j--){
  //     cout << j;
  //   }
  //   cout << endl;
  //   }


  // Hollow Diamond Pattern
  // n=4
      //  *
    //  *   *
  //  *       *
  // *        *
  //  *      *
    // *   * 
      // *


  int n = 4;
  // top 
  for (int i = 0; i < n; i++){
    // spaces
    for (int j = 0; j < n - i -1; j++){
      cout << " ";
    }
    cout << "*";
    if(i !=0){
      //spaces
    for (int j = 0; j < 2 * i -1; j++){
      cout << " ";
    }
    cout << "*";
    }
    cout << endl;
  }
  // bottom
  for (int i = 0; i < n-1; i++){
    // spaces
    for (int j = 0; j < i +1 ; j++){
      cout << " ";
    }
    cout << "*";
    if(i !=n-2){
      //spaces
    for (int j = 0; j < 2* (n-i) -5; j++){
      cout << " ";
    }
    cout << "*";
    }
    cout << endl;
  }



    return 0;
}

