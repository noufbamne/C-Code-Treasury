// A more advanced illustration of mathematical hierachy
#include<stdio.h>
int main(){
    int a=5,b=10,c=15,answer;

    answer = a+(b/c);
    printf("%d + (%d / %d) = %d\n",a , b , c , answer);

    answer= b*c-a;
    printf("%d * %d - %d = %d\n",b , c , a , answer);

    answer=a*b/c;
    printf("%d * %d / %d = %d\n",a , b , c , answer);

    answer=(a+c)*b/a;
    printf("(%d + %d ) * %d / %d= %d\n",a , c , b , a , answer);

    getch();
}