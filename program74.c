// formatted Disk I/O Functions
#include<stdio.h>
void main()
{
    FILE*fp;
    char another = 'Y';
    char name [40];
    int age;
    float bs;

    fp = fopen("practice.c","w");
    if (fp == NULL)
    {
        puts("Cannot open a file");
    }
    while (another == 'Y')
    {
        printf("Enter name, age and basic salary\n");
        scanf("%s %d %f", name, &age,&bs);
        fprintf(fp,"%s %d %f\n", name, &age,&bs);

        printf("Another employee(Y/N) ");
        fflush(stdin);
        another = getche();
    }
    fclose(fp);
}