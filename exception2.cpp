#include <iostream>

using std::cout;

class throwexception{
    public:
        throwexception();
        ~throwexception();
};

throwexception::throwexception(){
    cout << "throwexception object constructed" << "\n";
}

throwexception::~throwexception(){
    cout << "throwexception destructor called" << "\n";
    throw; //throw will always call terminate() [-Wterminate]
}

int main(){
    try {
        throwexception t;
        cout << "Throwing exception will cause termination" << "\n";
    }
    catch(...) {
        cout << "Main exception caught" << "\n";
    };
}