#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string line;
  ifstream MyFile("somequote.txt");
  while(getline(MyFile, line)){
    cout<<line<<'\n';
  }
  MyFile.close();
}
