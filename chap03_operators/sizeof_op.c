#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    char c;
    short s;
    int i;
    long l;
    float f;
    double d;
    printf("sizeof c = %d, sizeof(char) = %d\n"
            "sizeof s = %d, sizeof(short) = %d\n"
            "sizeof i = %d, sizeof(int) = %d\n"
            "sizeof l = %d, sizeof(long) = %d\n"
            "sizeof f = %d, sizeof(float) = %d\n"
            "sizeof d = %d, sizeof(double) = %d\n",
            sizeof (c), sizeof (char), sizeof (s), sizeof (short),
            sizeof (i), sizeof (int), sizeof (l), sizeof (long),
            sizeof (f), sizeof (float), sizeof (d), sizeof (double));
    return 0;
}
