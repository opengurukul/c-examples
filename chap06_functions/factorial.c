#include <stdio.h>
 
int facto(int n)
 {
 
    int k;
 
    if (n == 1)
         return (1);
    else
         k = n * facto(n - 1);
 
   return (k);
}
 
int main()
 {
 
    int n, fact;
    int facto(int);
 
    printf("\nenter the number for which you want to find the factorial");
    scanf("%d", &n);
 
    fact = facto(n);
 
    printf("\nthe factorial of the number %d is %d", n, fact);
    return 0;
}
