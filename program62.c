// Scope rule of functions

#include<stdio.h>
void main()
{
    int i = 20;

    display(i);
}

display(int j)
{
    int k = 35;
    printf("\n%d", j);
    printf("\n%d", k);
}