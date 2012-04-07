#include <stdio.h>
#include <stdlib.h>
 
int main() {
    /* Prompt user for file and count number of characters
 and lines in it*/
    {
        FILE * fopen(), *fp;
        int c, nc, nlines;
        char fprogrammingilename[40];
 
        nlines = 0;
        nc = 0;
 
        printf("Enter file name : ");
        gets(filename);
 
        fp = fopen(filename, "r");
 
        if (fp == NULL) {
            printf("Cannot open % s for reading \n", filename);
            exit(1); /* terminate program */
        }
 
        c = getc(fp);
        while (c != EOF) {
            if (c == ‘\n’)
                nlines++;
 
            nc++;
            c = getc(fp);
        }
 
        fclose(fp);
 
        if (nc != 0) {
            printf("There are % d characters in % s \n", nc, filename);
            printf("There are % d lines \n", nlines);
        } else
            printf("File : % s is empty \n", filename);
        return 0;
    }
 
