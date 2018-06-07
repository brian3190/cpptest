#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
  int age = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true;

  if((age >= 1) && (age < 16)){

    cout <<"You can't drive" << endl;
  } else if(! isNotIntoxicated){
    cout << "You can't drive" << endl;
  } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))){
    cout <<"You can't drive" << endl;
  } else {
    cout << "You can drive" << endl;
  }

  int greetingOption = 2;

  switch(greetingOption){
    case 1:
      cout << "Bonjour" << endl;
      break;
    case 2:
      cout << "Hallo" << endl;
      break;
    case 3:
      cout << "Hola" << endl;
      break;
    default:
      cout << "Hello" << endl;
  }

  int largestNum = (5>2)? 5 : 2;

  cout << largestNum << endl;

  int myFavNums[5];

  int badNums[5] = {4, 13, 14, 26, 45};

  cout << "Bad Number 1: " << badNums[0] << endl;

  char myName[5][5] = {{'D', 'e', 'r', 'e', 'k'},
                      {'D', 'a', 'r', 'n', 's'}};

  cout << "2nd letter in 2nd array " << myName[1][1] << endl;
  //Assignment
  myName[0][2] = 'e';

  cout << "New Value " << myName[0][2] << endl;

  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }

  for(int j = 0; j < 5; j++){
    for(int k = 0; k < 5; k++){
      cout << myName[j][k];
    }

    cout << endl;
  }

}
