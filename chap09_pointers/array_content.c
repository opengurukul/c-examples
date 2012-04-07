#include <stdio.h>
 
int my_array[] = {1, 23, 17, 4, -5, 100};
int *ptr;
 
int main(void) {
    int i;
    ptr = &my_array[0];
    printf("The contents of the array are:");
    for (i = 0; i < 6; i++) {
 
        printf("%d", *(ptr + i));
    }
    return 0;
}
