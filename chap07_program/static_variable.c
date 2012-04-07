#include <stdio.h>
#include <stdlib.h>
 
int sfunc()
{
  static int called = 0;
 
  called++;
 
  return called;
}
 
int main()
{
  printf("called %d time\n", sfunc());
  printf("called %d time\n", sfunc());
  printf("called %d time\n", sfunc());
  return 0;
}
