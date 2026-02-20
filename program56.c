// Tips and Traps
// switch statement
// you can put the cases in any order

#include<stdio.h>
void main()
{
    int i = 22;

    switch (i)
    {
    case 121:
        printf("This is case 121.\n");
        break;

    case 7:
        printf("This is case 7.\n");
        break;

    case 22:
        printf("This is case 22.\n");
        break;
    
    default:
        printf("I am in default");
        
    }
}
