#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c;
    int max;
    printf("Enter first value : ");
    scanf("%d", &a);
    printf("Enter second value : ");
    scanf("%d", &b);
    printf("Enter third value : ");
    scanf("%d", &c);
    max = c > (a > b ? a : b) ? c : ((a > b ? a : b));
    printf("The maximum value is : %d\n", max);
    return 0;
}
