#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int number = 0;
 
    printf("Enter an integer between 1 and 10: ");
    scanf("%d", &number);
 
    if (number > 5)
        printf("You entered %d which is greater than 5\n", number);
    else if (number == 5)
        printf("You entered %d which is equal to 5\n", number);
    else
        printf("You entered %d which is less than 5\n", number);
    return 0;
}
