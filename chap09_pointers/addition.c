#include <stdio.h>

main() {
    int ptr1, ptr2;
    int a, b, x, y, z;
    a = 30;
    b = 6;
    ptr1 = &a;
    ptr2 = &b;
    x = *ptr1 + *ptr2 –6;
    printf("\na=%d, b=%d", a, b);
    printf("\nx=%d,y=%d", x);
}
