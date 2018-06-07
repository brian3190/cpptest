#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
  int randNum = (rand() % 100) + 1;

  while(randNum != 100){
    cout << randNum << ", ";

    randNum = (rand() % 100) + 1;
  }

  cout << endl;

  int index = 1;

  while(index <= 10){

    cout << index << endl;

    index++;
  }

  string numberGuessed;
  int intNumberGuessed = 0;

  do {
    cout << "Guess between 1 and 10: ";

    getline(cin, numberGuessed);

    intNumberGuessed = stoi(numberGuessed);

    cout << intNumberGuessed << endl;


  } while(intNumberGuessed != 4);

  cout << "You win" << endl;
  // C way
  char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};

  string birthdayString = " Birthday";

  cout << happyArray + birthdayString << endl;

  string yourName;
  cout << "What is your name ";
  getline(cin, yourName);

  cout << "hello " << yourName << endl;

  string wholeName = yourName.assign(yourName);
  cout << wholeName << endl;

  string firstName = wholeName.assign(wholeName, 0, 5);
  cout << firstName << endl;

  int lastNameIndex = yourName .find("Banas", 0);
  cout << "Index for last name " << lastNameIndex << endl;

  // insert at 5th index
  yourName.insert (5, " Justin");
  cout << yourName << endl;

  // erase 6th index for 7 chars
  yourName.erase(6, 7);
  cout << yourName << endl;

  //index 6 replace 5 chars
  yourName.replace(6, 5, "Maximus");
  cout << yourName << endl;

  double eulersConstant = .57721;
  string eulerGuess;
  double eulerrGuessDouble;

  cout << "What is Euler's Constant?" ;
  getline(cin, eulerGuess);

  eulerGuessDouble = stod(eulerGuess);

  if(eulerGuessDouble == eulerConstant){
    cout << "You are right" << endl;
  } else {
    cout << "You are wrong" << endl;
  }

  cout << "Size of String " << eulerGuess.size() << endl;
  cout << "Is string empty " << eulerGuess.empty() << endl;
  cout << eulerGuess.append(" was your guess") << endl;

  string dogString = "dog";
  string catString = "cat";

  cout << dogString.compare(catString) << endl;
  cout << dogString.compare(dogString) << endl;
  cout << catString.compare(dogString) << endl;


  return 0;
}
