#include <iostream>
#include <string>

struct Vector2{
  float x, y;
}

int main(){
  Vector2 a = { 2, 3 };
  Vector2 b = a;
  // copied Vector2 a
  b.x =5

  //Referencing memory address of a
  //Vector2* a = new Vector2();
  //Vector2* b = a;
  //b->2

  std::cin.get();
}
