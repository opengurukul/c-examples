#include<stdio.h>

int main()
 {
    int myarray = {1, 23, 45, 67, 89};
    int *p;
    int i;
    p = &myarray[0];
    printf("\n\n");
    for (i = 0; i < 6; i++) {
        printf("myarray[%d]=%d", i, myarray[i]);

        printf("p+%d=%d\n", i, *(p + 1));
    }
    return 0;
}
