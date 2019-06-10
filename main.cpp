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
  std::cout << Multiply(5, 8) << std::endl;
  std::cin.get();
}
