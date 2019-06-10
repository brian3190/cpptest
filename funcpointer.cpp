#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

//void RandomGenerator(){
//  cout << rand() % 100 << endl;
//}

void PrintValue(int value)
{
  cout << "Value: " << value << endl;
}

void ForEach(const vector<int> values, void(*func)(int)) //no viable conversion
{
  for(int value : values) {
    func(values);
  }
}
int main()
{
  //void(*r)() = RandomGenerator;
  //r();
  //r();
  //r(); //persists
  vector<int> values = { 1, 5, 4, 2, 3};
  ForEach(values, PrintValue);
  ForEach(values, [](int value){ cout << "Value: " << value << endl; });



}
