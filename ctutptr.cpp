#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void makeMeYoung(int* age){
  cout << "I used to be " << *age << endl;
  *age = 21;
}

void actYourAge(int& age){
  age = 39;
}

int addNumbers(int firstNum, int secondNum = 0){
  int combinedValue = firstNum + secondNum;

  return combinedValue;
}

//Overload functions

int addNumbers(int firstNum, int secondNum, int thirdNum){
  return firstNum + secondNum + thirdNum;
}

int getFactorial(int number){
  int sum;
  if(number == 1) sum = 1;
  else sum = getFactorial(number - 1) * number;
  return sum;

  //getFactorial(2) [Returns 2] * 3
  //getFactorial(1) [Returns 1] * 2

}

int main(){
  cout << addNumbers(1) << endl;

  cout << addNumbers(1, 5, 6) << endl;

  cout << "The factorial of 3 is " << getFactorial(3) << endl;

  string someQuote = "I want to put a ding in the Universe";

  ofstream writer("somequote.txt");

  if(! writer){
    cout << "Error opening file" << endl;
    return -1;
  } else {
    writer << someQuote << endl;

    writer.close();
  }

  ofstream writer2("somequote.txt", ios::app);

  // ios::append : open a stream to append to file
  // ios::binary : Treat file as binary
  // ios::in : Open a file to read input
  // ios::trunc : Default
  // ios::out : Open a file to write output

  if (! writer2){
    cout << "Error opening file" << endl;
    return -1;
  } else {
    writer2 << "\n - Anonymous" << endl;

    writer2.close();
  }

  char letter;

  ifstream reader("somequote.txt");

  if (! reader){
    cout << "Error opening file" << endl;
    return -1;
  } else {
    for (int i=0; ! reader.eof(); i++){
      reader.get(letter);
      cout << letter;
    }

    cout << endl;
    reader.close();
  }

  int num = 0;

  try{
    if(num != 0){
      cout << 2/num << endl;
    } else throw(num);
  }
  catch(int num){
    cout << num << "is not valid" << endl;
  }

  int myAge = 39;
  int* agePtr = &myAge;
  char myGrade = 'A';

  cout << "Size of int " << sizeof(myAge) << endl;
  cout << "Size of char " << sizeof(myGrade) << endl;

  cout << "myAge is located at " << &myAge << endl;

  cout << "Address of pointer " << agePtr << endl;

  cout << "Data at memory address " << *agePtr << endl;

  int goodNums[5] = {4, 13, 46, 57, 68};

  int* numArrayPtr = goodNums;

  cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

  numArrayPtr++;

  cout << "Address " << numArrayPtr << " Value " << *numArrayPtr << endl;

  // Array name is just pointer to array
  cout << "Address " << goodNums << " Value " << *goodNums << endl;

  makeMeYoung(&myAge);

  cout << "I'm " << myAge << " years old now" << endl;

  // & sign refers to ageRef(reference) refers to the variable myAge
  // use Pointers if you don't want to have to initialize at declaration
  int& ageRef = myAge;

  cout << "myAge : " << myAge << endl;

  // Reference can be incremented
  ageRef++;

  cout << "myAge : " << myAge << endl;

  actYourAge(ageRef);

  return 0;
}
