#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{
  // empty map container
  map<int, int> test;

  // insert elements in random order
  test.insert(pair<int, int>(1, 40));
  test.insert(pair<int, int>(2, 30));
  test.insert(pair<int, int>(3, 60));
  test.insert(pair<int, int>(4, 20));
  test.insert(pair<int, int>(5, 40));
  test.insert(pair<int, int>(6, 40));
  test.insert(pair<int, int>(7, 30));

  // Printing map test
  map<int, int>::iterator itr;
  cout << "\nThe map test is : \n";
  cout << "\tKEY\tELEMENT\n";
  for (itr = test.begin(); itr != test.end(); ++itr){
    cout << '\t' << itr->first
         << '\t' << itr->second << '\n';
  }
  cout << endl;

  // Assigning the elements from test to test2
  map<int, int> test2(test.begin(), test.end());

  // print all elements of map test2
  cout << "\nThe map test2 after"
       << " assign from test is : \n";
  cout << "\tKEY\tELEMENT\n";
  for (itr = test2.begin(); itr != test2.end(); ++itr){
    cout << '\t' << itr->first
         << '\t' << itr->second << '\n';
  }
  cout << endl;

  //remove all elements up to element with key=4 in test
  cout << "\ntest2 after removal of elements less than key=4 : \n";
  cout << "\tKEY\tELEMENT\n";
  test2.erase(test2.begin(), test2.find(4));
  for (itr = test2.begin(); itr != test2.end(); ++itr){
    cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    // remove all elements with key = 4
    int num;
    num = test2.erase(4);
    cout << "\ntest2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    // Using iterators in for loop
    for (itr = test2.begin(); itr != test2.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }

    cout << endl;

    // lower bound and upper bound for map gquiz1 key = 5
    cout << "test.lower_bound(5) : "
         << "\tKEY = ";
    cout << test.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << test.lower_bound(5)->second << endl;
    cout << "test.upper_bound(5) : "
         << "\tKEY = ";
    cout << test.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = "
         << test.upper_bound(5)->second << endl;

    return 0;

}
