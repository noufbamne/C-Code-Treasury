// illustration of mixed mode expression

#include<stdio.h>
void main()
{
    int a = 2, answer;
    float b = 12.34, result;

    result = a * b;
    printf("%d * %f = %f\n", a,b, result);

    printf("%f in scientific notation is %e\n",result , result);

    answer = a * b;
    printf("%d * %f = %d\n", a,b, answer);

}