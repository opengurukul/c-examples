#include <stdio.h>
 
int fact(int n)
{
  if (n == 1) {
    return (1);
  } else {
    return (n * fact (n - 1));
  }
}
 
int main()
{
  int number;
 
  printf("calculate factorial of the number : \n");
  scanf("%d", &number);
  printf("factorial of number %d is %d\n", number, fact (number));
}
