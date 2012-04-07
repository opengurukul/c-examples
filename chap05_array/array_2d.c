#include<stdio.h>
#define ROW 100
#define COL 100
 
int main() {
    int i, j, r, c, a[ROW][COL], b[ROW][COL], sum[ROW][COL];
    printf("Enter the number of Rows:");
    scanf("%d", &r);
    printf("\nEnter the number of columns:");
    scanf("%d", &c);
    printf("\nEnter the value of first matrix:");
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            printf("\nEnter the value for a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the value for second matrix:");
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            printf("\nEnter the value for b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe Sum of two matrix is:\n");
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            printf("%d", sum[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return  0;
}
