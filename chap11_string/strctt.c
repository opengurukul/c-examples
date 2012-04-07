#include <string.h>
#include <stdio.h>
 
main()
{
  char message[128];
 
  strcpy(message, "Hello");
  strcat(message, " ");
  strcat(message, "World");
 
  printf("%s\n", message);
}
