// Reads the strings from the file anddisplays them on the screen
// string (line) I/O in files
// receives strings from keyboard and writes them into file
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fp;

    char s[80];

    fp = ("practice.c", "r");
    if (fp == NULL)
    {
        puts("Cannot open a file");
    }
    while (fgets(s, 79, fp) != NULL)
    printf("%s", s);
    
    fclose(fp);
}