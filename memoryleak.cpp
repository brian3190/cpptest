#include <memory>
#include <iostream>

class Sample {
public:
    int value;

    Sample(): value(42){
        std::cout << "The object is allocated.\n";
    }
    ~Sample(){
        std::cout << "The object is going to be deallocated.\n";
    }
};

int main(){
    // object allocated on the heap
    // cannot be deallocated since no pointer to it
    //
    // std::cout << (new Sample)->value << "\n";
    // destructor ~Sample is never called
    //
    // memory leak can be fixed using auto_ptr
    std::cout << (std::auto_ptr<Sample>(new Sample))->value << "\n";
}
    
