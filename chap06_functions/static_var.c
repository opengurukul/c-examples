#include <stdio.h>
 
void add() {
    static int x = 1;
    x++;
    printf("%d\n", x);
}
 
int main() {
    for (int i = 0; i <= 4; i++) {
        add();
    }
    return 0;
}
