#include<stdio.h>
 
int main() {
 
    int a, b, c;
    printf("\nEnter the 1st value:");
    scanf("%d", &a);
    printf("\nEnter the 2nd value:");
    scanf("%d", &b);
    printf("\nEnter the 3rd value:");
    scanf("%d", &c);
    if (a > b) {
        if (a > c) {
            printf("\nThe Greatest value amoung three numbers is:%d", a);
        } else {
            printf("\nThe Greatest value amoung three numbers is:%d", c);
        }
    } else if (b > c) {
        printf("\nThe Greatest value amoung three numbers is:%d", b);
    } else {
        printf("\nThe Greatest value amoung three numbers is:%d", c);
    }
    return 0;
}
