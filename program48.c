// Generate addition table for a number n, shorter loop

#include<stdio.h>
void main()
{
    int i, j, n;

    printf("What number do you want a table for ?");
    scanf("%d", &n);
    printf("\n");

   
    for (i = 0, j = n; i <= n; i++ , j--)
    
    printf("%3d + %3d = %3d\n", i, j, n);
        
}