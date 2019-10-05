#include <iostream>

using namespace std;

int factorial(int n){
  if(n==1 || n==0)
  {
    return 1;
  } else {
    return n*factorial(n-1);
  }
};

int main(){
    int n;
    cout << "Factorialize a number:" << endl;
    cin >> n;
    cout << factorial(n) << endl;
    cin.get();
}
