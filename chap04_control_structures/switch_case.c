#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int grade;
 
    printf("Input grade :");
    scanf("%d", & grade);
 
    switch (grade) {
        case 1: printf("Fall (F)\n");
            break;
        case 2: printf("Bad (D)\n");
            break;
        case 3: printf("Good (C)\n");
            break;
        case 4: printf("Very Good (B)\n");
            break;
        case 5: printf("Excellent (A)\n");
            break;
        default: //optional
            printf("You have inputted false grade\n");
            break; // break isn’t necessary here
    }
    return 0;
}
 
