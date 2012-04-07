#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int x, y;
 
    x = 10;
 
    y = x++; /* y should have 10, x will be 11 post */
 
    printf("x = %d, y = %d\n", x, y);
 
    y = --x; /* x will become 10, y will also be 10 */
 
    printf("x = %d, y = %d\n", x, y);
 
    y = x--; /* y should have 10, x will be 9 post decrement */
 
    printf("x = %d, y = %d\n", x, y);
 
    y = ++x; /* x will become 10, y will also be 10 */
 
    printf("x = %d, y = %d\n", x, y);
 
    return 0;
}
 
