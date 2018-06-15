#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

//loop through string and print out even numbered chars then odd numbered chars
int main() {
    int T;
    cin >> T;
    string s[10000];
    for (int i=0; i<=T; i++){
      getline(cin, s[i]);
    }
    for (int i=1; i<=T; i++){
      //cout << s[i] << endl;
      string str = s[i];
      for (int j=0; j<=str.length()-1; j++){
        if(j%2==0){
          cout << str[j];
        }
      }
      cout << " ";
      for (int j=0; j<=str.length()-1; j++){
        if(j%2==1){
          cout << str[j];
        }
      }
      cout << endl;
    }

    return 0;
}
