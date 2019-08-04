#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Sorting requires random access iterators:
  vector, deque, container array, native array

vector<int> vec = {9,1,10,2,45,3,90,4,9,5,8};

sort(vec.begin(), vec.end());

bool lsb_less(int x, int y){
  return (x%10)<(y%10);
}
sort(vec.begin(), vec.end(), lsb_less);

//Top 5 students according to their test scores
//Partial Sort

vector<int> vec2 = {9,60,70,8,45,87,90,4,9,5,8};

partial_sort(vec2.begin(), vec2.begin()+5, vec2.end(), greater<int>());

partial_sort(vec2.begin(), vec2.begin()+5, vec2.end());

nth_element(vec2.begin(), vec2.begin()+5, vec2.end(), greater<int>()); //top 5 moved to front

// Move students whose score is less than 10 to the front
vector<int> vec3 = {9, 60, 70, 8, 45, 87, 90, 69, 69, 55, 7};

bool lessThan10(int i){
  return (i<10);
}

partition(vec3.begin, vec3.end(), lessThan10); //8 7 9 90 69 60 55 45 70 87 69

//Preserves original order
stable_partition(vec3.begin(), vec.end(), lessThan10); //9 8 7 ...

//Heap algorithms
vector<int> vec4 = {9,1,10,2,45,3,90,4,9,5,8};

make_heap(vec4.begin(), vec4.end());

pop_heap(vec4.begin(), vec4.end()); //Swap vec[0] with last item vec[size-1]
                                    //Heapify[vec.begin(), vec.end()-1]

vec4.pop_back(); //Remove the last item

vec4.push_back(100); //Adding new element
push_heap(vec4.begin(), vec4.end()); //Heapify the last item in vec

// Heap sorting:
vector<int> vec5 = {9,1,10,2,45,3,90,4,9,5,8};
make_heap(vec5.begin(), vec5.end());

sort_heap(vec5.begin(), vec5.end());
