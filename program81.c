// Detecting errors in readinag and Writing

#include<stdio.h>
void main()
{
    FILE*fp;
    char ch;
    
    fp = fopen("practice.c","w");
    
    while (!feof(fp))
    {
       ch = fgetc(fp);
       if(ferror())
       {
            printf("Error in reading file");
            break;
       }
       else
       printf("%c",ch);
    }
    fclose(fp);
}