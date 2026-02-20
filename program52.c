// The keyword "break", breaks the control only from the "while" in which it is placed.
// Consider the following program which illustrates this fact.

#include<stdio.h>
void main()
{
    int i = 1, j = 1;
    
    while (i++ <= 100)
    {
       while (j++ <= 200)
       {
        if (j == 150)
        break;

        else
        printf("%d%d\n",i,j);
        
       }
       
    }
    
}
// In this program j = 150, break the control outside the inner while only, since it is place inside the inner while
