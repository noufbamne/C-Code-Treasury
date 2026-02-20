// Calculating the sum of integers low from high

#include<stdio.h>
void main()
{
    int i, low , high , sum = 0;

    printf("Please type in a low bound : ");
    scanf("%d",&low);

    printf("Please type in a high bound : ");
    scanf("%d", &high);

    for ( i = low; i <= high; i++)
    sum += i;
    
        printf("The sum of the integers form %d to %d is %d\n", low , high, sum);
    
    
}