#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double values[] = { 3.33, 67.99, 876.5, 8888.45 };
    string names[] = { "A", "B", "C", "D" };
    for (int i=0; i<4; ++i)
        cout << setiosflags(ios_base::left)
                << setw(6) << names[i]
                << resetiosflags(ios_base::left)
                << setw(10) << values[i] << endl;
    return 0;
}
