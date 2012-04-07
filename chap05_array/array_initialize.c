#include<stdio.h>
 
#define MAX_CLASS 5
 
int main()
{
  /* initialize while declaring */
  int students[MAX_CLASS] = {30, 35, 40, 45, 50};
  int class;
 
  for (class = 0; class < MAX_CLASS; class++) {
    printf("students in class %d : %d\n", class+1, students[class]);
  }
 
}
