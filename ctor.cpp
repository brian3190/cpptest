#include <iostream>

using namespace std;

class Integer {
public:
    int value;
    Integer(){
        value = 0;
    }
    Integer(int v){
        value = v;
        cout << "ctor with arg" << v << endl;
    }
    ~Integer();
};

int main(){
    Integer i(3);
    Integer j = 5;
    Integer k; // value = 0
    return 0;
}
