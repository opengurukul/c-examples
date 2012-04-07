#include <stdio.h>
#include <stdlib.h>
 
int main() {
    file* fp;
    printf("Data input\n");
    fp = fopen("INPUT", "w");
    while ((c = getchar()) != EOF)
        putc(c, fp);
    fclose(fp);
 
    printf("Data output\n");
    fp = fopen("INPUT", "r");
    while ((c = getc(fp)) != EOF)
        printf("%c", c);
    fclose(fp);
    return 0;
}
 
