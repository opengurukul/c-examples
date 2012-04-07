#include<stdio.h>
int marks[] = {66, 70, 60, 82, 89};
int n, result = 0, avg = 0;
 
int main() {
    for (n = 0; n < 5; n++) {
        result += marks[n];
    }
    avg = result / 5;
    printf("The average of marks is %d", avg);
    return 0;
}
