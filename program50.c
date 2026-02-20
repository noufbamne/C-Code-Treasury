// Execution of a loop an unknown number of times
#include<stdio.h>
void main()
{
    char another = 'y';
    int num;

    while (another =='y')
    {
        printf("ENTER A NUMBER : ");
        scanf("%d", &num);
        printf("square of %d is %d", num, num * num);
        printf("\nWant to enter another number y/n?");
        scanf("%c", &another);
    }
    
}