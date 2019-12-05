#include <iostream>
#include <string>
#include <vector>

using std::string;

template<typename TContainer>
void bubbleSort(TContainer begin,TContainer end) {
    for(TContainer i = begin; i != end; ++i) {
        for(TContainer j = begin; j != i; ++j) {
            if(*i < *j) {
                std::swap(*i, *j);
            }
        }
    }
}

int main(){

std::vector<int> myvec{17,31,5,70,9,15};

bubbleSort(myvec.begin(), myvec.end());

for(auto i = myvec.begin(); i != myvec.end(); ++i){
    std::cout << *i << '\n';
}

return 0;
} 
