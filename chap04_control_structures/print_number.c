#include<stdio.h>
 
int main() {
 
    int i, n;
    printf("\nEnter the Value:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("\n%d\t*%d\t=%d", n, i, (n * i));
    }
    return 0;
}
