#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <array>

using namespace std;
using namespace std::chrono;


void print(char c){
  cout << c;
}

int main(){
  // fills array
  array<char,1000> arr;
  arr.fill('*');


  // times array
  auto t5 = high_resolution_clock::now();
  for(char& x : arr){
    cout << x;
  }

  // stops timer 
  std::chrono::high_resolution_clock::time_point t6 = high_resolution_clock::now();
  cout << "\n" << "Time for for_ref : " << duration_cast<nanoseconds>(t6-t5).count() << " nanoseconds" << endl;


  // using steady_clock
  chrono::steady_clock::time_point t1 = chrono::steady_clock::now();
  for_each(arr.begin(), arr.end(), print);
  chrono::steady_clock::time_point t2 = chrono::steady_clock::now();
  auto t_end_each = chrono::duration_cast<chrono::nanoseconds>(t2 - t1);
  std::chrono::duration<double, std::milli> t_end_each_milli = t2 - t1;

  cout << "\n" << typeid(t_end_each).name();
  cout << "\n" << "Time for for_each : " << t_end_each.count() << " nanoseconds";
  cout << "\n" << "Time in milliseconds (double) : " << t_end_each_milli.count() << "ms";
  cout << "\n" << "Time in seconds (double) : " << duration<double>(t_end_each).count() << "s" << endl;

  auto t3 = high_resolution_clock::now();
  for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i){
    cout << arr[i];
  }
  auto t4 = high_resolution_clock::now();
  cout << "\n" << "Time for for_loop : " << duration_cast<nanoseconds>(t4-t3).count() << " nanoseconds" << endl;

}
