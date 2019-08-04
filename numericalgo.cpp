#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

vector<int>vec = {8,9,9,9,45,87,90};

bool found = binary_search(vec.begin(), vec.end(), 9);

vector<int> s = {9, 45, 66};
bool found = includes(vec.begin(), vec.end(), //Range #1
                      s.begin(), s.end());    //Range #2

itr = lower_bound(vec.begin(), vec.end(), 9);

itr = upper_bound(vec.begin(), vec.end(), 9);

pair_of_itr = equal_range(vec.begin(), vec.end(), 9);

//Merge
vector<int> vec2 = {8,9,9,10};
vector<int> vec3 = {7,9,10};
merge(vec2.begin(), vec2.end(),
      vec3.begin(), vec3.end(),
      vec_out.begin());

vector<int> vec4 = {1,2,3,4,1,2,3,4,5};
inplace_merge(vec4.begin(), vec4.end()+4, vec4.end()); //1 1 2 2 3 3 4 4 5

//Set operations
vector<int> vec5 = {8, 9, 9, 10};
vector<int> vec6 = {7, 9, 10};
vector<int> vec_out[5];

set_union(vec5.begin(), vec5.end(), //only one copy of element is kept
          vec6.begin(), vec6.end(),
          vec_out.begin());

set_intersection(vec5.begin(), vec5.end(), // {9, 10, 0, 0, 0};
                 vec6.begin(), vec6.end(),
                 vec_out.begin());

set_difference(vec5.begin(), vec5.end(), // {9, 10, 0, 0, 0};
              vec6.begin(), vec6.end(),
              vec_out.begin());

set_symmetric_difference(vec5.begin(), vec5.end(),
                        vec6.begin(), vec6.end(),
                        vec_out.begin());

int x = accumulate(vec.begin(), vec.end(), 10); // 10 is initial amount

int y = accumulate(vec.begin(), vec.end(), 10, multiplies<int>());

int z = inner_product(vec.begin(), vec.begin()+3, // range #1
                      vec.end()-3, // range #2
                      10); // init value
// 10 + vec[0]*vec[4] + vec[1]*vec[5] + vec[2]*vec[6]

int a = inner_product(vec.begin(), vec.begin()+3,
                      vec.end()-3,
                      10,
                      multiplies<int>(),
                      plus<int>());
// 10 * (vec[0]+vec[4]) * (vec[1]+vec[5]) * (vec[2]+vec[6])

//PARTIAL SUM
partial_sum(vec.begin(), vec.end(), vec2.begin(), multiplies<int>()); //vec[1] = vec[0] + vec[1]

//ADJACENT DIFFERENCE
adjacent_difference(vec.begin(), vec.end(), vec2.begin());

adjacent_difference(vec.begin(), vec.end(), vec2.begin(), plus<int>()); //similar to adjacent sums
