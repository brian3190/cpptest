#include <iostream>
#include <array>
#include <string>

using namespace std;

int main() {
  array<int , 3> a = { 3, 4, 5}; //array container not array
  array<int, 3>::iterator itr; //iterators must match all template class arguments
  itr = a.begin();
  cout << *itr << endl; //print dereferenced iterator
  itr = a.end();
  cout << *itr << endl;

  int numItems;
  cout << "how many items?";
  cin >> numItems;
  int *arr = new int[numItems]; //variable sized arrays allowed

  for(int i=0; i<numItems; ++i)
  {
    cin >> arr[i];
  };
  for(int i=0; i<numItems; ++i)
  {
    cout << arr[i] << endl;
  }
  delete[] arr;

  cin.get();
}
