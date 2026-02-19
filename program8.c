// Program to compute the aaverage of three integers 

#include<stdio.h>
void main()
{
   int a = 3,
       b = 2,
       c = 6,
       average = (a + b +c)/3,
       remainder = (a + b +c)%3;

       printf("The average of %d, %d and %d is %d and remainder is %d/3\n",a , b , c ,average ,remainder);
}

// The observant might notice thet the sum of a,b and c is calculated twice.
// such reduntancy should be avoided.
// one solution would be to calculte the sum first and then use it in further calcutions.

// int a = 3,
//    b = 2,
//    c = 6,
//    sum = a + b +c,  (no parenthesis needed now)
//    average = sum/3
//    remainder = sum%3