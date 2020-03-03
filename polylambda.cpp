#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    long n = 342030;
    auto fp = [](const auto & n) -> auto { return n * 5; };
    // auto fp = []<typename T>(const T & n) -> T { return n * 4; }; C++20
    auto x = fp(n);

    cout << "value of x: " << x << " type of x: " << typeid(x).name() << endl;

    return 0;
}