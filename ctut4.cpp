#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main() {

  vector <int> lotteryNumVect(10);

  int lotteryNumArray[5] = {4, 13, 15, 24, 45};

  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

  cout << lotteryNumVect.at(5) << endl;

  lotteryNumVect.push_back(64);

  cout << "Final Value" << lotteryNumVect.back() << endl;

  // cout << "First Value" << lotteryNumVect.front() << endl;
  // cout << "Is empty?" << lotteryNumVect.empty() << endl;

  lotteryNumVect.pop_back();

  cout << "Size" << lotteryNumVect.size() << endl;

  



  return 0;

}
