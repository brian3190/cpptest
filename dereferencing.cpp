#include <iostream>

using namespace std;

/*
x = x + 4;
x = *p + 4;
*p = *p + 4;
*/

int main(){
  int x = 5;
  int *p = &x;
  int *ptr = new int;
  *ptr = 10;

  cout << &x << endl; // 0x10978435 mem address
  cout << *p << endl; // 5
  cout << *ptr << endl; // 10

  delete ptr; // free up memory, p is dangling pointer

  cout << ptr << endl;

  ptr = new int; // reuse for new address

  cout << *ptr << endl;
}
