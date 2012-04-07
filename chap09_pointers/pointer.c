#include <stdio.h>
 
main()
{
  int v;
  int *v_p; /* v_p is a pointer to integer variable */
 
  v_p = &v; /* v_p points to address of v */
 
  v = 5;
  printf("v = %d, *v_p = %d\n", v, *v_p);
 
  *v_p = 10; /* modify v using pointer */
  printf("v = %d, *v_p = %d\n", v, *v_p);
 
}
 
