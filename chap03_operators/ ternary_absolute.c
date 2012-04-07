#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int x, x_abs;
    printf("Enter a number : ");
    scanf("%d", &x);
    x_abs = (x < 0) ? -x : x;
    printf("The absolute value is : %d\n", x_abs);
    return 0;
}
 
