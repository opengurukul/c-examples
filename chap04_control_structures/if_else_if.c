#include<stdio.h>
 
int main() {
 
    int choice, a, b;
    printf("\nEnter the value for a:");
    scanf("%d", &a);
    printf("\nenter the value for b:");
    scanf("%d", &b);
    while (choice) {
        printf("\n1.addition\n2.subtraction\n3.multiplication\n4.Division\nEnter your choice : ");
                scanf("%d", &choice);
        if (choice == 1) {
            printf("\nSum:%d", (a + b));
        } else if (choice == 2) {
            if (a > b) {
                printf("\nDifference:%d", (a - b));
            } else {
                printf("\nDifference:%d", (b - a));
            }
        } else if (choice == 3) {
            printf("\nMultiplication:%d", (a * b));
        } else if (choice == 4) {
            if (a > b) {
                printf("\nDivision:%d", (a / b));
            } else {
                printf("\nDivision:%d", (b / a));
            }
        } else if (choice == 0) {
            printf("\nBYE");
            break;
        } else
            printf("\nEnter Right choice");
 
        }
    return 0;
}
