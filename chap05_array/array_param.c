#include <stdio.h>
 
void print_students(int students[], int numstuds)
{
  int i;
 
  for (i = 0; i < numstuds; i++)
  {
    printf("%d : %d \n", i, students[i]);
  }
 
}
 
#define NUM_TOPPERS 4
 
int main()
{
  int toppers_roll_no[NUM_TOPPERS] = { 10, 20, 30, 432};
  print_students(toppers_roll_no, NUM_TOPPERS);
}
