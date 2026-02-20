// Print file contents on the printer

#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;
    char ch;

    fp = fopen("practice.c", "r");
    if (fp == NULL)
    {
        printf("Cannot open a file");
    }
    while ((ch = fgetc(fp)) != EOF)
    fputc (ch,stdprn);
    
    fclose(fp);
}