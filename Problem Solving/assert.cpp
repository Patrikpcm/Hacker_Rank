/* 
assert example 
In this example, assert is used to abort the program execution if print_number
is called with a null pointer as attribute. This happens on the second call to
the function, which triggers an assertion failure to signal the bug.
*/
#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */

void print_number(int* myInt) {
  assert (myInt!=NULL);
  printf ("%d\n",*myInt);
}

int main ()
{
  int a=10;
  int * b = NULL;
  int * c = NULL;

  b=&a;

  print_number (b);
  print_number (c);

  return 0;
}