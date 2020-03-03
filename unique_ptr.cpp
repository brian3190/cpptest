#include <memory>
#include <iostream>
#include <utility>
#include "strc.h"
#include "strc.cpp"

using std::cout;

void message(const char * s){
    printf("\n%s\n", s);
    fflush(stdout);
}

void disp(std::unique_ptr<strc> & o){
    if(o) puts(o->value());
    else puts("null");
    fflush(stdout);
}

int main(){
    cout << "creating unique pointer" << "\n";
    std::unique_ptr<strc> a(new strc("one"));
    disp(a);

    cout << "make_unique two" << "\n";
    auto b = std::make_unique<strc>("two");
    disp(a);
    disp(b);

    cout << "reset a to three" << "\n";
    a.reset(new strc("three"));
    disp(a);
    disp(b);

    cout << "move b to c" << "\n";
    auto c = std::move(b);
    disp(a);
    disp(b);
    disp(c);

    cout << "reset a" << "\n";
    a.reset();
    disp(a);
    disp(b);
    disp(c);

    auto d = c //fails

    cout << "release c" << "\n";
    c.release();
    disp(a);
    disp(b);
    disp(c);

    message("end of scope");
    return 0;
}