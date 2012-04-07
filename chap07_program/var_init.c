extern int i ; /* declaration */
 
extern int j;  /* declaration */
 
int i = 5; /* definition & initialization */
 
int j;  /* definition * initilization to zero */
 
main()
 
{
 
  static int s = 5 ; /* deinition and initializtion to 5 */
 
  static int t ;   /* definition and initialization to 0 */
 
  int a;           /* definition and uninitizlied - automatic variable */
 
  printf("i = %d, j = %d, s = %d, t = %d, a = %d\n", i, j, s,t,a);
 
