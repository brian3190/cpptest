#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> vec = {9, 60, 70, 8, 45, 87, 90};
vector<int> vec2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//COPY
copy(vec.begin(), vec.end(),
     vec2.begin());

copy_if(vec.begin(), vec.end(),
        vec2.begin(),
        [](int x){ return x>80; });

copy_n(vec.begin(), 4, vec2.begin());

copy_backward(vec.begin(), vec.end(),
              vec2.end());

//MOVE
vector<int> vec3 = {"apple", "orange", "pear", "grape"};
vector<int> vec4 = {"", "", "", "", "", "", ""};

move(vec3.begin(), vec3.end(), vec4.begin());

move_backward(vec3.begin(), vec3.end(), vec4.end());


//TRANSFORM
vector<int> vec5 = {9, 60, 70, 8, 45, 87, 90};
vector<int> vec6 = {9, 60, 70, 8, 45, 87, 90};
vector<int> vec7 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


transform(vec5.begin(), vec5.end(),
          vec7.begin(),
          [](int x){return x-1;});

transform(vec5.begin(), vec5.end(),
          vec6.begin(),
          vec7.begin(),
          [](int x, int y){return x+y;});

//SWAP
swap_ranges(vec5.begin(), vec5.end(), vec7.begin());

//FILL
vector<int> vec8 = {0, 0, 0, 0, 0};

fill(vec8.begin(), vec8.end(), 9);

fill_n(vec8.begin(), 3, 9);

generate(vec8.begin(), vec8.end(), rand);

generate_n(vec8.begin(), 3, rand);

//REPLACE
replace_if(vec.begin(), vec.end(),
           [](int x){return x>80;}
           9);

replace(vec.begin(), vec.end(),
        6,
        9);

replace_copy(vec.begin(), vec.end(),//source
             vec2.begin(),          //destination
             6,                     //old value condition
             9);                    //new value

//REMOVE
remove(vec.begin(), vec.end(), 3);

remove_if(vec.begin(), vec.end(), [](int x){return x>80;});

remove_copy(vec.begin(), vec.end(),
            vec2.begin(),
            6);

//UNIQUE

unique(vec.begin(), vec.end());    //Removes consecutive equal elements

unique(vec.begin(), vec.end(), less<int>());

unique_copy(vec.begin(), vec.end(), vec2.begin());



// REVERSE
vector<int>vec9 = { 3, 40, 200, 506, 87, 92, 16};
vector<int>vec10 = {0, 0, 0, 0, 0, 0, 0};

reverse(vec9.begin()+1, vec9.end()-1);
// vec: {3, 92, 87, 506, 200, 40, 16}

reverse_copy(vec9.begin()+1, vec9.end()-1, vec10.begin());

//ROTATE
rotate(vec.begin(), vec.begin()+3, vec.end());

rotate_copy(vec.begin(), vec.begin()+3, vec.end(),
            vec2.begin());

//PERMUTE
next_permutation(vec.begin(), vec.end());
prev_permutation(vec.begin(), vec.end());

//SHUFFLE
random_shuffle(vec.begin(), vec.end());
random_shuffle(vec.begin(), vec.end(), rand);

C++ 11
shuffle(vec.begin(), vec.end(), default_random_engine());
