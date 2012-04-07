#include <stdio.h>
 
int square(int a) {
    int r;
    r = a*a;
    return (r);
}
 
int main() {
    int z;
    z = square(5);
    printf("The result is %d", z);
    return 0;
}
