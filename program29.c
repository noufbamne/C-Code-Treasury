// A program to read in numbers and print out their squares

#include<stdio.h>
void main()
{
    int n;

    printf("Enter an integer (negative to quit) : ");
    scanf("%d", &n);

    while (n >= 0)
    {
        printf("\n%d square is %d\n", n , n * n);
        printf("\n\n Enter an integer (negative to quit) : ");
        scanf("%d", &n);
    }
    
}