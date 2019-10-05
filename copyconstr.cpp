#include <iostream>
#include <string>

struct Vector2{
  float x, y;
};

int main(){
  Vector2 a = { 2, 3 };
  Vector2 b = a;
  // copied Vector2 a
  b.x =5;

  std::cout << a.x << std::endl;
  std::cout << b.x << std::endl;

  //Referencing memory address of a
  Vector2* c = new Vector2();
  Vector2* d = c;
  //d.y

  std::cout << c->x << std::endl;
  std::cout << d->x << std::endl;

  std::cin.get();
}
