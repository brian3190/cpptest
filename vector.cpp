#include <string>
#include <iostream>

struct Vector {
  int sz;
  double* elem;
};

void vector_init(Vector& v, int s){
  v.elem = new double[s];
  v.sz = s;
};

void f(Vector v, Vector& rv, Vector* pv){
  int i1 = v.sz;
  int i2 = rv.sz;
  int i4 = pv->sz;
};
