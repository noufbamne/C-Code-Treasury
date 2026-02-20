// illustration of a nest of for loop
#include<stdio.h>
void main()
{
    int sum, i , j , n;

    for ( i = 1; i <=6; i++)
    {
        printf("\n\nPlease type in a positive integer : ");
        scanf("%d", &n);

        sum = 0;
        for (j = 1; j <= n; j++)
        sum += j;

        printf("\nThe sum of the integers from 1 to %d is : %d\n",n ,sum);
       
        }
    
}