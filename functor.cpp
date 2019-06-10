#include <iostream>
#include <vector>

using namespace std;

class X {
  public:
  void operator()(string str){
    cout << "Calling functor X with parameter " << str << endl;
  }
  // operator string() const { return "X"; } // type conversion operator
};

class Y {
  public:
  Y(int i) {}
  void operator()(string str){
    cout << "Calling functor Y with parameter " << str << endl;
  }
};

template<int val>
void addVal(int i) {
  cout << val+i << endl;
};

int main(){
  vector<int> vec = { 2, 3, 4, 5};
  X foo;
  foo("bar");
  Y(8)("baz");

}
