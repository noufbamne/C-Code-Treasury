// to read back the names ages and basic salaries of different employees whic we stored through the earlier program into the file
// formatted Disk I/O Functions
#include<stdio.h>
void main()
{
    FILE*fp;
    char another = 'Y';
    char name [40];
    int age;
    float bs;

    fp = fopen("practice.c","r");
    if (fp == NULL)
    {
        puts("Cannot open a file");
    }
    while (fscanf(fp,"%s %d %f\n", name, &age,&bs)!= EOF)
           printf("%s %d %f\n", name, &age,&bs);
    
    fclose(fp);
}