#include<stdio.h>
 
int main() {
    int i;
    printf("\nEnter the Value:");
    scanf("%d", &i);
    printf("\nValue before increment is:%d", i++);
    printf("\nValue after increment is:%d:", i);
    return 0;
}
