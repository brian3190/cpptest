#include <iostream>

using namespace std;

//int argc, char **argv

int main(int argc, string argv[]){
  string s;
  cout << "Please enter a string ending with 'd': " << endl;
  getline(cin, s, 'd');

  cout << "You entered:" << s << endl;

  return 0;
}
