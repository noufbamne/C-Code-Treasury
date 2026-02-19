// Sillustration of the modulus operator

#include<stdio.h>
int main()
{
    int a = 4, b = 8, c= 13;

    printf("%d mod %d = %d\n", b , a ,b % a);
    printf("%d mod %d = %d\n", c , a ,c % a);
    printf("%d mod %d = %d\n", c , b ,c % a);

    printf("The modulus operator is : %%\n");

    getch();

}