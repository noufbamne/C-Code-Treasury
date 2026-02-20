// A program to read in length and width and print out the perimeter and area
#include<stdio.h>
void main()
{
    int length,width;

    printf("Enter the length and width.\n");
    printf("(One or both negative to quit): ");
    scanf("%d %d", &length ,&width);

    while (length > 0 && width > 0)
    {
        printf("The perimeter is %d.\n", 2 * (length + width));
        printf(" The area is %d.\n", length * width);
        printf("\n Enter length and width : \n");
        printf("(One or both negative to quit): ");
        scanf("%d %d", &length, &width);
    }
    
}