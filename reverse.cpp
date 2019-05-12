#include <iostream>
#include <cmath>
#include <string>
#include <cstdio>

using namespace std;

int main(){
  int N;
  cin >> N;
  cin.ignore();

  int arr[];
  string str;
  getline(cin,str);
  arr = stoi(str);

  cout << arr;
  //num_array = atoi(str);
  //cout << num_array;

  //for (int i=N; i==0; i--){
  //  cout << num_array[N] << " ";
  //}
  return 0;
}
