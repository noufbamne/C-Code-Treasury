// Text versus Binary amode :newline

#include<stdio.h>
void main()
{
    FILE*fp;
    char ch;
    int  noc = 0;

    fp = fopen ("Practice.c", "rb");
    if(fp == NULL)
    {
        puts("Cannot open a file");
    }

    while (1)
    {
        ch = getc(fp);

        if (ch == EOF)
        break;

        noc++;
    }

    fclose(fp);
    
    printf("\nNumber of characters = %d",noc);

}