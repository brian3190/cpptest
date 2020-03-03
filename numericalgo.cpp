#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main(){

// binary search in STL
vector<int> vec = {8,9,9,9,45,87,90};

bool found = binary_search(vec.begin(), vec.end(), 9);

cout << found << endl; //OUTPUT: 1


vector<int> s = {9, 45, 66};

// check if all elements of s is in vec
bool found2 = includes(vec.begin(), vec.end(), //Range #1
                      s.begin(), s.end());    //Range #2

if(found2)
{
    cout << "all of s is in vec" << endl;
} else {
    cout << "s is not in vec" << endl;
};

auto itr = lower_bound(vec.begin(), vec.end(), 9);

auto itr2 = upper_bound(vec.begin(), vec.end(), 9);

auto pair_of_itr = equal_range(vec.begin(), vec.end(), 9);

//Merge in STL
vector<int> vec_out(7);

vector<int> vec2 = {8,9,9,10};
vector<int> vec3 = {7,9,10};
merge(vec2.begin(), vec2.end(),
      vec3.begin(), vec3.end(),
      vec_out.begin());

cout << "Merge:" << endl;
for (vector<int>::iterator it = vec_out.begin(); it!= vec_out.end(); ++it)
{
    cout << *it << ' ';
}
cout << endl;


vector<int> vec4 = {1,2,3,4,1,2,3,4,5};
inplace_merge(vec4.begin(), vec4.begin()+4, vec4.end()); 

cout << "Inplace Merge:" << endl;
for (vector<int>::iterator iter=vec4.begin(); iter!=vec4.end(); ++iter)
{
    cout << ' ' << *iter;
}
cout << endl; //OUTPUT: 1 1 2 2 3 3 4 4 5

//Set operations in STL
vector<int> vec5 = {8, 9, 9, 10};
vector<int> vec6 = {7, 9, 10};
vector<int> vec_out2(5);

set_union(vec5.begin(), vec5.end(), //only one copy of element is kept
          vec6.begin(), vec6.end(),
          vec_out2.begin());

set_intersection(vec5.begin(), vec5.end(), // {9, 10, 0, 0, 0};
                 vec6.begin(), vec6.end(),
                 vec_out2.begin());

set_difference(vec5.begin(), vec5.end(), // {9, 10, 0, 0, 0};
              vec6.begin(), vec6.end(),
              vec_out2.begin());

set_symmetric_difference(vec5.begin(), vec5.end(),
                        vec6.begin(), vec6.end(),
                        vec_out2.begin());

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

}
