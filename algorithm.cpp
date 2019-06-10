#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

void printplus(int y){
  cout << to_string(y+2) << " ";
}

bool isOdd(int i){
  return i % 2;
}

int main(){

  vector<int> vec = { 2, 4, 6, 8, 10, 10, 15};

  // compound lambda function in for_each
  for_each(vec.begin(), vec.end(), [](int x){ cout << to_string(x += 2) << " "; }); // 4 6 8 10 12 12 17
  cout << "\n";

  for_each(vec.begin(), vec.end(), printplus); // 4 6 8 10 12 12 17
  cout << "\n";

  for(auto i : vec){
    cout << i+2 << " "; // 4 6 8 10 12 12 17
  }
  cout << endl;

  // count_if // count // find_if
  cout << count_if(vec.begin(), vec.end(), [](int x){ return x % 2 == 0;}) << endl; // 6

  cout << count(vec.begin(), vec.end(), 10) << endl; // 2

  vector<int>::iterator itr = find_if(vec.begin(), vec.end(), [](int y){ return y % 5 == 0;}); // 10
  cout << *itr << endl;

  auto iter = find_if(vec.begin(), vec.end(), isOdd); // 15
  cout << *iter << endl;


  // generate


  // init statements ONLY in c++17
  //if(auto itr = vec.find(4); itr == vec.end()){
  //  cout << 9 << " not found." << endl;
  //} else {
  //  cout << 4 << " is at location " << vec.find(4) << endl;
  //}



}
