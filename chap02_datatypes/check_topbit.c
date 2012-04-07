#include <stdio.h>
#include <stdlib.h> 
 
void test_topbit(int value) {
    if (value & ~0x7FFFFFFFUL)
        printf("%d : top bit is set\n", value);
    else
        printf("%d: top bit is not set\n", value);
}
 
int main(void) {
    test_topbit(1);
    test_topbit(-1);
    return 0;
} 
