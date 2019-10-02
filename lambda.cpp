#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Template function for lambda functions
template<typename func>
void filter(func g, vector<int> arr) {
  for (auto i : arr) {
    if(g(i))
    cout << i << " ";
  }
}

//Constexpr -- Only in C++14
constexpr int factorial(int n)
{
  return n <= 1 ? 1 : (n * factorial(n - 1));
}

int main() {
  cout << [](int x, int y){ return x+y; }(4, 5) << endl;
  auto f = [](int x, int y){ return x+y; };
  cout << f(9,12) << endl;

  vector<int> v = { 1, 2, 3, 4, 5, 6};

  // filters lambda function with condition x>3 from values in v vector
  filter([](int x) { return x>3; }, v );
  cout << endl;

  // filters lambda function with condition in v vector
  filter([](int y) { return y>2 && y<5; }, v);

  int y = 4;
  // lambda function with capture by reference for int y
  filter([&](int x){ return (x > y); }, v);

  int x = 3;
  // lambda function with capture by value
  filter([=](int x){ return (x > y); }, v);


  cout << '\n';
  cout << factorial(5) << endl; 

  return 0;
}
