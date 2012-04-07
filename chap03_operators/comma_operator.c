#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a = 1, b = 2;
    int i;
    i = (a, b); // stores b into i
    printf("i = %d, b =%d\n", i, b);
    i = a, b; // stores a into i
    printf("i = %d, a =%d\n", i, a);
    return 0;
}
