#include<stdio.h>
void main()
{
    int input_value,
    test_value;

    do
    {
        printf("Enter a positive value for use in .\n");
        printf("Dividing the input into two lines : ");
        scanf("%d", &test_value);

    } 
    while (test_value <= 0);

    printf("Enter a line of positive integers in ascending order,\n");
    printf("With zero (or negative) as trailer : \n");
    printf("\nnLine 1> ");

    scanf("%d ", &input_value);

    while (input_value > 0 && input_value < test_value)
    scanf("%d ", &input_value);

    printf("\nLine 2> ");

    while(input_value > 0)
    scanf("%d" , &input_value);

    printf("\n");

}