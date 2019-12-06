#include <iostream>

using std::cout;
using std::endl;

class Integer {
public:
    Integer(){
        value = 0;
        ptr = (int*)malloc(sizeof(int));
    };
    Integer(int v){
        value = v;
        cout << "ctor with arg " << v << endl;
    };
    ~Integer(){
        free(ptr);
    };
    void printAddress(){ std::cout << "Address on stack is " << this << "\n"; }
    void printMemberAddress(){ std::cout << "Member memory block on heap at " << ptr << "\n"; }
private:
    int *ptr;
    int value;
};

int main(){
    Integer i(3);
    Integer j = {5}; //member initialization list
    Integer k(i); //copy constructor
    i.printAddress();
    i.printMemberAddress(); //same
    j.printAddress();
    j.printMemberAddress();
    k.printAddress();
    k.printMemberAddress(); //same
    return 0;
}
