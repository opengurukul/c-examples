#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    printf("%c, %d(dec), %#o, %#x\n", 'a', 'a', 'a', 'a');
    printf("%c, %c, %c, %c\n", 'a', 97, '\x61', '\141');
    return 0;
}
 
