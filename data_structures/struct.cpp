#include <fstream>
#include <iostream>

using namespace std;

struct Date
{
    int month, day, year;
};

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
};

int area(struct Rectangle r)
{
    return r.length*r.breadth;
};

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
};

int main() 
{
    // Outputs date to date.dat in binary
    Date dt = { 10, 2, 2019 };
    ofstream file("date.dat", ios_base::binary);
    file.write(reinterpret_cast<char *>(&dt),sizeof(dt));
    file.close();

    // Initialization
    // Rectangle r = { 10, 5 };
    struct Rectangle r;

    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);

    cout << "Length of r is:" << r.length << endl;
    cout << "Breadth of r is:" << r.breadth << endl;
    
    // Rectangle2
    Rectangle *P;
    P = (Rectangle*)malloc(sizeof(Rectangle));
    cout << "Size of P is :" << sizeof(P) << endl;
    P->length = 50;
    (*P).breadth = 60;
    
    cout << P->length << endl;
    cout << (*P).breadth << endl;
    return 0;
}
