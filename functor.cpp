#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

constexpr size_t _maxlen = 128;
// class with operator overload
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

class Z {
    char lastchar;
  public:
    Z() : lastchar(0) {}
    char operator() (const char & c);
};

char Z::operator()(const char & c){
  const char r = (lastchar == ' ' || lastchar == 0) ? toupper(c) : tolower(c);
  lastchar = c;
  return r;
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
  char lastchar = 0;
  char s[] = "lorem ipsum dolor sit amet";
  transform(s, s + strnlen(s, _maxlen), s, Z());
  transform(s, s + strnlen(s, _maxlen), s, [&lastchar](const char & c)->char{
    const char r = (lastchar == ' ' || lastchar == 0) ? toupper(c) : tolower(c);
    lastchar = c;
    return r;
  });
  puts(s);

  return 0;
}
