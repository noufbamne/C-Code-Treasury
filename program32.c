// A program to test five integers for ascending order

#include<stdio.h>
void main()
{
    int number,
    previous_number,
    index = 1,
    count = 1;

    printf("Please Enter five integers,\n ");
    printf("Seperated by carriage return: \n");
    scanf("%d", &previous_number);

    while (index < 5)
    {
        scanf("%d", &number);
        index = index + 1;
        if (number < previous_number)
        printf("The number in position %d is out of order.\n", index);
        
        else
        {
            count = count + 1;
            previous_number = number;
        }
    }
    printf("%d of the numbers are in ascending order.\n", count);
}