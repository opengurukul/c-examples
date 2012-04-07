#include <stdio.h>
 
enum { INT, FLOAT };
 
union arg_u
{
  int i;
  float f;
};
 
void f (int type, union arg_u arg)
{
  switch (type)
    {
    case INT:
      printf ("i value = %d\n", arg.i);
      break;
    case FLOAT:
      printf ("f value = %f\n", arg.f);
      break;
    }
}
 
int main ()
{
  union arg_u arg;
 
  arg.i = 10;
  f (INT, arg);
  f (FLOAT, arg);
 
  arg.f = 5.2;
  f (FLOAT, arg);
  f (INT, arg);
 
  printf ("base addr of i = %#lx, base addr of f = %#lx\n", &arg.i, &arg.f);
}
 
