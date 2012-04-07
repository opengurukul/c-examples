#include <string.h>
#include <stdio.h>
 
main()
{
  int length;
  char *message_p = "Hello World";
 
  length = strlen(message_p);
 
  printf("length of %s = %d\n", message_p, length);
}
