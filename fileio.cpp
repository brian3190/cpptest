#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
  ofstream MyFile;
  MyFile.open("test.txt");

  MyFile << "Some text. \n";
  MyFile << "Another line of text. \n";
  MyFile << "3 \n";
  MyFile << "10 \n";
  MyFile << "2 \n";
  MyFile.close();
  
  string line_;
  ifstream MyFile_("test.txt");
  if(MyFile_.is_open())
  {
      while(getline(MyFile_,line_))
      {
	  std::cout << line_ << std::endl;
      }
      MyFile_.close();
  }
  else {
      std::cout << "file is not open" << std::endl;
  }
  std::cin.get();
  return 0;
}
