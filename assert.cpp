#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */
//#define NDEBUG        //ignore assert

void print_number(int* myInt) {
  assert (myInt!=NULL);
  printf ("%d\n",*myInt);
}

int main ()
{
  int a=10;
  int * b = NULL;
  int * c = NULL;

  // b now has value of a
  b=&a;

  print_number (b);
  print_number (c);

  return 0;
}
