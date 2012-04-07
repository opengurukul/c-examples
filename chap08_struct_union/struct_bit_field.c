#include <stdio.h>
#include <stddef.h>
#include <string.h>
 
struct s {
  unsigned int f1:8;
  unsigned int f2:4;
  unsigned int f3:4;
  unsigned int f4:16;
  /* end of bit fields */
  unsigned int f5;
};
 
int main()
{
 struct s s_v;
 int      i;
 
 i = 0x12345678 ;
 
 memcpy(&s_v, &i, sizeof(int));  
 
 /* on little endian system */
 /* LSB @ lowest address : 0x78 @ f1 */
 
 printf("f1 = %#lx\n", s_v.f1); 
 printf("f2 = %#lx\n", s_v.f2); 
 printf("f3 = %#lx\n", s_v.f3); 
 printf("f4 = %#lx\n", s_v.f4); 
 
 /* find the offset */
 printf("offset of f5 = %d\n", offsetof(struct s, f5)); 
 
}
