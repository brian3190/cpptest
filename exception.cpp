#include <iostream>

using namespace std;

int main(){
  try {
    int motherAge = 29;
    int sonAge = 36;
    if (sonAge > motherAge) {
      throw 99;
    }
  }
  catch (int x){
    cout<< "Wrong age values - Error"<< x <<endl;
  }

  try{
    int num1;
    cout<<"Enter the first number:";
    cin >> num1;

    int num2;
    cout<<"Enter the second number:";
    cin >> num2;

    if(num2 == 0){
      throw 0;
    }

    cout <<"Result:"<< num1/num2 << endl;
  }
  catch(...) { //catch any type of exception
    cout<< "Division by zero!";
  }
}
