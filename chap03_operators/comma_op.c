#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int i = 10, b = 20, c = 30;
    i = b, c;
    printf("%i\n", i);
 
    i = (b, c);
    printf("%i\n", i);
    return 0;
}
 
