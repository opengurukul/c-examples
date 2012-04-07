#include <stdio.h>
#include <string.h>
 
typedef struct emp {
  int emp_id;
  char emp_name[256];
} emp_t ;
 
main()
{
  emp_t e;
  emp_t *e_p; /* pointer to struct */
 
  e.emp_id = 432;
  strcpy(e.emp_name, "surinder kumar");
 
  e_p = &e;
 
  printf("id = %d, name = %s\n", e_p->emp_id, e_p->emp_name);
}
