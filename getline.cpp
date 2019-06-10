#include <iostream>

using namespace std;

//int argc, char **argv

int main(int argc, string argv[]){
  string s;
  cout << "Please enter a string: " << endl;
  getline(cin, s);

  cout << "You entered:" << s << endl;

  return 0;
}
