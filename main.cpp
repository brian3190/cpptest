#include <iostream>

void Log(const char* c){
  std::cout << c;
};

int Multiply(int a, int b)
{
  Log("Multiply");
  std::cout << "\n";
  return a * b;
}

int main()
{
  int *p;
  if(true)
  {
    int x = 400;
    p = &x;
  }
  std::cout << *p << std::endl; //prints 400 still dangling pointer?
  std::cout << Multiply(5, 8) << std::endl;
  std::cin.get();
}
