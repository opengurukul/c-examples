#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int numb1, num2, sum, sub, mul, div, mod;
    scanf("%d %d", &num1, &num2);
 
    sum = num1 + num2;
    printf("\n Thu sum is = %d", sum);
 
    sub = num1 - num2;
    printf("\n Thu difference is = %d", sub);
 
    mul = num1*num2;
    printf("\n Thu product is = %d", mul);
 
    div = num1 / num2;
    printf("\n Thu division is = %d", div);
 
    mod = num1 % num2;
    printf("\n Thu modulus is = %d", mod);
    return 0;
}
 
