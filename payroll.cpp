#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct IndvSalary
{
    unsigned id;
    double salary;
};

int main()
{
    IndvSalary employee1 = { 800003, 9000 };
    ofstream os("payroll", ios_base::out | ios_base::binary);
    os.write(reinterpret_cast<char *>(&employee1), sizeof(employee1));
    os.close();

    ifstream is("payroll",ios_base::in | ios_base::binary);
    if (is)
    {
        IndvSalary employee2;
        is.read(reinterpret_cast<char *>(&employee2), sizeof(employee2));
        cout << employee2.id << " " << employee2.salary << endl;
    } else {
        cout << "ERROR: Unable to open file 'payroll'." << endl;
    }
    is.close();
    return 0;
}
