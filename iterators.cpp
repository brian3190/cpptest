#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main(){
  //Random Access Iterator : vector, deque, array
  vector<int>::iterator itr;
  itr = itr + 5; //increment iterator
  itr = itr - 4; //decrement iterator

  // Insert Iterator
  vector<int> vec1 = { 2, 3};
  vector<int> vec2 = { 4, 5, 7, 18};
  itr = find(vec2.begin(), vec2.end(), 7); //places itr at position 2, 7
  insert_iterator<vector<int> > i_itr(vec2, itr); //places insert iterator with vec2
  copy(vec1.begin(), vec1.end(), i_itr); //copies vec1 from begin to end into insert_iter
  for (auto i : vec2){
    cout << i << " ";
  };// vec2 = {4, 5, 2, 3, 7, 18}
  cout << '\n';
  // note : back_insert_iterator and front_insert_iterator

  //Stream Iterator
  vector<string> vec4;

  //Bidirectional Iterator : list, set/multiset, map/multimap
  list<int>::iterator it;
  ++it;
  --it;

  //Forward Iterator : forward_list
  forward_list<int>::iterator iter;
  ++iter;

  //Unordered containers have at least forward iterators

  //Input iterators - only read from dereferenced iterator while iterating forward
  int y = *itr;

  //Output iterators - output values while iterating forward
  *itr = 100;


}
