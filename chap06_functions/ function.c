#include <stdio.h>
 
int sum(int first, int second)
{
   int total;
 
   total = first + second ;
 
   return total;
}
 
void main()
{
   int num1 = 10;
   int num2 = 20;
   int sum;
 
   sum = add(num1, num2);
 
   printf("sum is %d\n", sum);
}
