// string (line) I/O in files
// receives strings from keyboard and writes them into file
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;

    char s[80];

    fp = ("practice.c", "w");
    if (fp == NULL)
    {
        puts("Cannot open a file");
    }
    printf("\n Enter a few lines of text : \n");
    while (strlen(gets(s))>0)
    {
        fputs(s,fp);
    }
    fclose(fp);
}