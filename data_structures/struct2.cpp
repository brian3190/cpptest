#include <iostream>

using namespace std;

struct Test
{
    int A[5];
    int n;
};

//Copies the struct object but makes no changes
void amend(struct Test t1)
{
    t1.A[0] = 10;
    t1.A[1] = 9;
    t1.A[2] = t1.n;
};

//Copies the struct object and changes it's values
Test change(struct Test *t1)
{
    Test *pt1 = new Test;
    pt1->A[0] = 10;
    pt1->A[1] = 9;
    pt1->A[2] = t1.n;
    return pt1;
};

int main()
{
    struct Test t = {{2, 4, 6, 8, 10}, 5};
    amend(t); //amend doesn't amend 

    cout << t.A[0] << endl;
    cout << t.A[2] << endl;

    t = change(t); //changes the t object
    cout << t.A[0] << endl;
    cout << t.A[2] << endl;

    return 0;
}
