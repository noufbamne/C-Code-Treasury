// Trouble in opening a file
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE*fp;

    fp = fopen("program69.c", "r");
    if (fp == NULL)
    {
        puts("Cannot open file");
        
    }
    
}