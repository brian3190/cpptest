#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

  vector<int> lotteryNumVect(10);

  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44); //44 at position 6
  cout << lotteryNumVect.at(5) << endl; //range check
  lotteryNumVect.push_back(64);
  cout << lotteryNumVect.at(11) << endl; //64 at position 11
  cout << "Final Value " << lotteryNumVect.back() << endl;

  // cout << "First Value" << lotteryNumVect.front() << endl;
  // cout << "Is empty?" << lotteryNumVect.empty() << endl;
  lotteryNumVect.pop_back();
  cout << "Size is " << lotteryNumVect.size() << endl;
  cout << "Vector before clear is " << endl;
  for (int i = 0; i < lotteryNumVect.size(); ++i){
    cout << lotteryNumVect[i] << " ";
  }
  cout << endl;

  // lotteryNumVect.clear(); // clears lotteryNumVect

  // Reinitialize lotteryNumVect with new values
  lotteryNumVect = { 6, 8, 19, 42, 53, 77};
  for (vector<int>::iterator itr = lotteryNumVect.begin(); itr != lotteryNumVect.end(); ++itr) //traverses container
  {
    cout << *itr << " ";
  }
  cout << endl;

  for (int it : lotteryNumVect) {
    cout << it << " ";
  }
  cout << endl;

  for (auto j : lotteryNumVect) // auto type
  {
    cout << j << " ";
    cout << "Type of j is " << typeid(j).name() << endl;
  }

  int* p = &lotteryNumVect[0]; //pointer to lotteryNumVect
  p[2] = 2; // changed lotteryNumVect[2] to 2
  for (auto i : lotteryNumVect) {
    cout << i << " ";
  }
  cout << endl;

  // vec2.swap(vec) swaps the contents of two vectors



  return 0;

}
