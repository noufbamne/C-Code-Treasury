// This program divides the series of positive integers (in ascending order) into two lines ,at a predermined point
#include<stdio.h>
void main()
{
    int input_value,
    test_value;

    scanf("%d",&input_value);

    while (input_value > 0 && input_value < test_value)
    {
        printf("%d ", input_value);
        scanf("%d", &input_value);
    }
    
}