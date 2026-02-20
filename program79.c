// Records I/O in Files
// Writing records to a file using structure

#include<stdio.h>
void main()
{
    FILE*fp;
    char another = 'Y';
    
    struct emp
    {
        char name [40];
        int age;
        float bs;
    };
   
    struct emp e;

    fp = fopen("practice.c","w");
    if (fp == NULL)
    {
        puts("Cannot open a file");
    }
    while (another == 'Y')
    {
        printf("Enter name, age and basic salary\n");
        scanf("%s %d %f", e.name, &e.age,&e.bs);
        fprintf(fp,"%s %d %f\n", e.name, &e.age,&e.bs);

        printf("Add another record(Y/N) ");
        fflush(stdin);
        another = getche();
    }
    fclose(fp);
}