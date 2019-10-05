#include <fstream>

using namespace std;

struct Date
{
    int month, day, year;
};

int main() 
{
    // Outputs date to date.dat in binary
    Date dt = { 10, 2, 2019 };
    ofstream file("date.dat", ios_base::binary);
    file.write(reinterpret_cast<char *>(&dt),sizeof(dt));
    file.close();
    return 0;
}
