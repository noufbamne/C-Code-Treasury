// A file copy program
// This program takes the content of a text file and copies them into anither text file, character by character
#include<stdio.h>
void main()
{
    FILE *fs, *ft;
    char ch;

    fs = fopen ("program1.c", "r");
    if (fs == NULL)
    {
        puts("Cannot open source file");
    }
    ft = fopen("practice.c", "w");

    if (ft == NULL)
    {
        puts("Cannot open a target file.");
        fclose(fs);
    }
    
    while (1)
    {
        ch = fgetc(fs);

        if (ch == EOF)
        break;

        else
        fputc(ch,ft);
    }
    
    fclose(fs);
    fclose(ft);
}