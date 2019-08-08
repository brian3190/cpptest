#include <iostream>
#include <string>

template<typename T>
void Print(T value)
{
  cout << value << endl;
}

template<typename T, int N>
class Array
{
  private:
    T m_array[N];

  public:
    int GetSize() const {return N;}
};

int main(){
  Array<string, 50> array;
  Print<std::string>("test");
  Print(5);
}
