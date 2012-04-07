#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int x1 = 10;
    int x2 = 100;
    int x3 = 1000;
 
    printf("left justify\n");
    printf("%d\n%d\n%d\n", x1, x2, x3);
 
    printf("right justify\n");
    printf("%6d\n%6d\n%6d\n", x1, x2, x3);
    return 0;
}
