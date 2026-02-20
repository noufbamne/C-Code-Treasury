// Compute the perimeter of a rectangle 

#include<stdio.h>
void main()
{
    int length, width , perimeter;

    length = 13;
    width = 52;
    perimeter = 2 * length + 2 * width;
    printf("The perimetr of a rectangle with\n");
    printf(" length= %d and width=%d is %d",length, width, perimeter);
}