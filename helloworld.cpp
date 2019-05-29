#include <vector>
#include <string>
#include <iostream>
#include <cstdlib> //for atoi()

using namespace std;

int main(){
  cout << "Hello World" << endl;

  const double PI = 3.14159526535;
  float favNum = 3.14159;
  int myAge = 99;
  int largestInt = 2147483648;
  char s[3] = "42"; //char array with size 3; 4, 2, \0

  cout << "Favourite Number " <<favNum << endl; //
  cout << "Size of int is " << sizeof(myAge) << endl; // 4 bytes
  cout << "Size of favNum is " << sizeof(favNum) << endl; // 4 bytes
  cout << "Size of double is " << sizeof(PI) << endl; // 8 bytes
  cout << "4 / 5 = " << 4 / 5 << endl; // 0 due to int
  cout << "4 / 5 = " << (float) 4 / 5 << endl; // casting to float : 0.8
  cout << "5 / 6 = " << (double) 5 / 6 << endl; // casting to double : 0.833333
  cout << s << s << endl;
  cout << s << " is string. " << atoi(s) << " is integer." << endl; // converts char array to int
  cout << "My Age is " << std::to_string(myAge) << endl; // converts int to string

  return 0;
}
