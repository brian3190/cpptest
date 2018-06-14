#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream MyFile;
  MyFile.open("test.txt");
  //ofstream MyFIle("test.txt"); //path to file as constructor

  if(MyFile.is_open()){
    MyFile << "Some text. \n";
  } else {
    cout << "Something went wrong";
  }
  MyFile.close();
}
