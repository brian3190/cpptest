#include <iostream>

using namespace std;

class Mother{
  public:
  Mother()
  {
    cout << "Mother ctor" << endl;
  }
  ~Mother()
  {
    cout << "Mother dtor" << endl;
  }
};

int main(){
  Mother m;
}
