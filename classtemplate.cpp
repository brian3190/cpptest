#include <iostream>

using namespace std;

template <class T>
class Pair{
  private:
    T first, second;
  public:
    Pair(T first, T second);
    T bigger(T first, T second);
    T add();
    T sub();
};

template <class T>
Pair<T>::Pair(T first, T second)
{
    this->first = first;
    this->second = second;
}

template <class T>
T Pair<T>::add()
{
    T c;
    c = first + second;
    return c;
}

template <class T>
T Pair<T>::sub()
{
    T c;
    c = first - second;
    return c;
}

template <class T>
T Pair<T>::bigger(T first, T second){
  return (first>second?first:second);
}


int main(){
  Pair <int> obj(11,22);
  cout << "The bigger number is: " << obj.bigger(44,22) << endl;
  cout << "The addition of numbers is: " << obj.add() << endl;
  cout << "The difference of numbers is: " << obj.sub() << endl;
}
