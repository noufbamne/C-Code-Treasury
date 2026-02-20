// Another illustration of a nest of for loop

#include<stdio.h>
void main()
{
    int sum, i, j, n, runs;

    printf("How many values of n do you wish to enter?");
    scanf("%d",&runs);
    printf("\n\n");

    for ( i = 1; i <= runs; i++)
    {
       printf("\nPlease type in a positive integer : ");
       scanf("%d", &n);

       sum = 0;
       for ( j = 1; j <= n; j++)
       sum += j;

       printf("\nThe sum of integers from 1 to %d is : %d.\n", n, sum);       
    }
    

}