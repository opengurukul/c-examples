#include<stdio.h>
 
int main() {
    int i = 1, j;
    j = i++ + ++i;
    printf("\nThe value is:%d", j);
    j = ++i + i;
    printf("\nThe value is:%d", j);
    j = i + ++i;
    printf("\nThe value is:%d", j);
    j = i++ +i;
    printf("\nThe value is:%d", j);
}
