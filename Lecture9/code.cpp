#include <iostream>
#include <vector>
using namespace std;

int main(){

  // vector<int> vec; // 0
  // vector<int> vec = {1,2,3}; // 3
  // vector<int> vec(5, 2);
  vector<char> vec = {'a','b','c','d','e'};
  for (char val : vec ){
    cout << val << endl;
  }

    return 0;
}