// passing addresses to pointers
// swap program
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;

    swapr(&a , &b);

printf("\n a = %d",a);
printf("\n b = %d",b);
}
swapr(int *x, int *y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;
}