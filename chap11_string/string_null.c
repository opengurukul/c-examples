#include <string.h>
 
main()
{
 
   char p[] = { 'h' , 'i', '\0'};
 
   printf("%s\n", p);  /* prints hi */
 
   p[1] = '\0' ; /* replace i with null terminator */
 
   printf("%s\n", p); /* prints h */
 
}
