#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(){

  vector<vector<int>> arr {{0, 0, 0}, {255, 255, 250}, {100, 0, 0}, {100, 100, 100}};
  vector<int> target {3, 5, 7};
  vector<int> rgb;
  vector<int> terminal {300, 0, 0};
  int foo[] = {3, 5, 7, 200, 250, 255};
  vector<int>::iterator ptr;

  arr.insert(arr.end(), terminal);

  //cout << target.end() << endl;

  for (int j = 0; j < 6; ++j){
    rgb.push_back(foo[j]);
    if (rgb.size() == 3){
      arr.insert(arr.end(), rgb);
      rgb = {};
    }
  }

  int num = (sizeof(foo) / sizeof(foo[0]));
  cout << to_string(num) << endl;
  cout << typeid(arr.end()).name() << endl;
  cout << typeid(num).name() << endl;
  cout << typeid(arr.begin()).name() << endl;

  for (unsigned i = 0; i < 7; ++i){
    cout << arr.at(i) << endl;
  }

  for (int i = 0; i < arr.size(); ++i){
    if (arr[i] == target){
      cout << "found at: " << i << endl;
    }
  }

  //TODO: test out iterators
  /*
  for (ptr = arr.begin(); ptr < arr.end(); ++ptr){
    if (arr[*ptr] == target){
      cout << "found at: " << *ptr << endl;
    }
  }
  */

  //for (int i = 0; i < arr.size(); i++){
  //  cout << arr[i][j] << endl;
  //}



}
