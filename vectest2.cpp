#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::vector<std::vector<int> > grid {
    { 0, 1, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0 },
    { 0, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 1, 0 }
  };

  for(std::vector<std::vector<int> >::iterator itr = grid.begin(); itr != grid.end(); ++itr){
    std::cout << *itr << std::endl;
  }


}
