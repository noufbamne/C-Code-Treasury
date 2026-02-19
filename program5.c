// illustration of unary minus

#include<stdio.h>
int main()
{
    int a = -4 , b = 5 , c = -6;

    printf("a = %d , b = %d , c = %d\n\n\n", a, b, c);
    printf("    and now\n\n\n");
    
    a = -a;
    b = -b;
    c = -c;

    printf("a = %d, b = %d, c= %d\n\n\n",a,b,c);

    getch();
    }