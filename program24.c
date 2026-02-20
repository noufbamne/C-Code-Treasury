#include<stdio.h>
void main()
{
    int number,
        previous_number,
        index = 1,
        count = 1;

    printf("Enter the five integers : ");
    scanf("%d", &previous_number);

    scanf("%d", &number);
    index = index + 1;

    if (number < previous_number)
        printf("The number in position %d is out of order.\n", index);
    else
    {
        count = count + 1;
        previous_number = number;
    }

    scanf("%d",&number);
    index = index + 1;

    if (number < previous_number)
        printf("The number in position %d is out of order.\n", index);

    else
    {
        count = count + 1;
        previous_number = number;
    }

    scanf("%d",&number);
    index = index + 1;

    if(number < previous_number)
    printf("The number of positon %d is out of order.\n", index);

    else
    {
        count = count + 1;
        previous_number= number;
    }

    scanf("%d", &number);
    index = index + 1;

    if (number < previous_number)
    printf("The number position %d is out of order.\n", index);

    else
    {
        count = count + 1;
        previous_number = number;
    }
    
    printf("The numbers are in ascending order.\n", count);
    
}