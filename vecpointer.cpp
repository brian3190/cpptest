#include <iostream>
#include <string>

struct Vector2{
  float x, y;
};

int main(){
  Vector2 a = { 2.0, 3.0 };
  Vector2 b = a;
  // copied Vector2 a
  b.x = 5.0;

  std::cout << a.x << std::endl; //2.0
  std::cout << b.x << std::endl; //5.0

  //Referencing memory address of a
  Vector2* c = &a;
  Vector2* d = new Vector2();

  std::cout << c->x << std::endl; //2.0
  std::cout << c->y << std::endl; //3.0
  std::cout << d->x << std::endl; //0
  std::cout << d->y << std::endl; //0

  std::cin.get();
}
