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
  sort(vec2.begin(), vec2.end());
  for_each(vec2.begin(), vec2.end(), [](int x){ cout << x << " "; }); // 2 3 4 5 7 18
  cout << endl;

  // note : back_insert_iterator and front_insert_iterator

  //Stream Iterator
  //vector<string> vec3;
  //copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(vec4));
  //copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout, " "));
  //copy(istream_iterator<string>(cin), istream_iterator<string>(), ostream_iterator<string>(cout, " "));

  //Reverse Iterator
  vector<int> vec4 = { 5, 6, 7, 8};
  reverse_iterator<vector<int>::iterator> ritr;
  for (ritr = vec4.rbegin(); ritr != vec4.rend(); ritr++){
    cout << *ritr << " ";
  }
  cout << endl;

  //Bidirectional Iterator : list, set/multiset, map/multimap
  //list<int>::iterator it;
  //++it;
  //--it;
  list<int> li;
  list<int>::reverse_iterator revlistiter;
  li.push_back(1);
  li.push_back(2);
  li.push_back(3);

  //Reverse traversal
  cout << "Reverse traversal of list." << endl;
  for(revlistiter = li.rbegin(); revlistiter != li.rend(); revlistiter++) {
    cout << (*revlistiter) << endl;
  }
  
  //Istreambuf_iterator
  std::istreambuf_iterator<char> istreambuf(std::cin.rdbuf());  //reads characters a user types into terminal
  std::string mystring;
  std::string istreambuf_iterator<char> isbeos;
  //loop until end of stream 
  while (istreambuf != isbeos && *istreambuf != '\n'){
    mystring += *istreambuf++;
  }

  //Istream_iterator
   std::istream_iterator<int> is(std::cin);

  //Forward Iterator : forward_list
  forward_list<int> fwdlist;
  forward_list<int>::iterator iter;
  //++iter;
  fwdlist.push_front(3);
  fwdlist.push_front(2);
  fwdlist.push_front(1);

  cout << "Forward iterator traversal of forward_list."
  for (iter = fwdlist.begin(); iter != fwdlist.end(); iter++) {
    cout << (*iter) << endl;
  //Unordered containers have at least forward iterators

  //Input iterators - only read from dereferenced iterator while iterating forward
  //int y = *itr;

  //Output iterators - output values while iterating forward
  //*itr = 100;

  //Loops
  vector<int>vec5 = { 15, 12, 13, 19, 1, 18, 16, 14};
  vector<int>::iterator itera = min_element(vec5.begin(), vec5.end()); //min_element
  
  //Sort
  sort(vec5.begin(), itera);
  for_each(vec5.begin(), vec5.end(), [](int x){ cout << x << " "; }); // 12 13 15 19 1 18 16 14
  cout << endl;

  // Reverse
  reverse(itera, vec5.end());
  for_each(vec5.begin(), vec5.end(), [](int x){ cout << x << " "; }); // 12 13 15 19 14 16 18 1
  cout << endl;

  // Copy
  vector<int>vec6(4); //itera points to 1, 4 elements to vec5.end() #UNSAFE
  copy(itera, vec5.end(), vec6.begin()); //copies vec5 from itera to vec5.end() into vec6.begin()
  for_each(vec6.begin(), vec6.end(), [](int x){ cout << x << " "; }); // 14 16 18 1
  cout << endl;
  // SAFE COPY
  vector<int>vec7;
  copy(itera, vec5.end(), back_inserter(vec7)); //creates back_insert_iterator to insert elements at vec7.end(), not efficient
  for_each(vec7.begin(), vec7.end(), [](int x){ cout << x << " "; }); // 14 16 18 1
  vec7.clear();
  cout << "clear ";
  vec7.insert(vec7.end(), itera, vec5.end()); //better way
  for_each(vec7.begin(), vec7.end(), [](int x){ cout << x << " "; }); // 14 16 18 1
  cout << endl;

}
