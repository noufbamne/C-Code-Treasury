// calculating sum of integers of low through high with an exchange if necessary
#include<stdio.h>
void main()
{
    int i, low , high, temp , sum = 0;

    printf("Please type in a low bound : ");
    scanf("%d", &low);

    printf("Please type in a high bound : ");
    scanf("%d", &high);

    if (high < low)
    {
       printf("OOPS! Wrong order.\n");
       printf("Never mind, I will switch them.\n");

    //    swap the two values

        temp = low;
        low = high;
        high = temp;
    }

    for ( i = low; i <= high; i++)
    sum += i;
    printf("\nThe sum of integers from %d to %d is : %d.\n", low , high, sum);
}