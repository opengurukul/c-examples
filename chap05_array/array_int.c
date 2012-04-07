#include<stdio.h>
 
#define MAX_CLASS 5
 
int
main()
{
  int students[MAX_CLASS]; /* no. of students by class-wise */ 
  int class; 
 
  students[0] = 30; /* class 1 */
  students[1] = 35; /* class 2 */
  students[2] = 40; /* class 3 */
  students[3] = 45; /* class 4 */
  students[4] = 50; /* class 5 */
 
  for (class = 0; class < MAX_CLASS; class++) {
    printf("students in class %d : %d\n", class+1, students[class]);
  }
 
}
