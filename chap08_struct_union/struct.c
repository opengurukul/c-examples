#include <stdio.h>
#include <string.h>
 
typedef struct emp {
  int emp_id;
  char emp_name[256];
} emp_t ;
 
main()
{
  emp_t e;
 
  e.emp_id = 432;
  strcpy(e.emp_name, "surinder kumar");
 
  printf("id = %d, name = %s\n", e.emp_id, e.emp_name);
}
 
