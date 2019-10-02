#include <iostream>
#include <sstream>
#include <string>

using namespace std;

template <class T>
inline string toString(const T &type)
{
    ostringstream os;
    os << type;
    return os.str();
}

int main()
{
    string s1 = toString(9);
    cout << s1 << endl;
    string s2 = toString(1.5);
    cout << s2 << endl;
    return 0;
}
