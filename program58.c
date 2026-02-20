// Goto statements

#include<stdio.h>
void main()
{
    int goals;

    printf("Enter the number of goals scored agiainst India : ");
    scanf("%d", &goals);

    if (goals <= 5)
    goto sos;

    else
    {
        printf("About time soccer players learnt C.\n");
        printf("And said GOODBYE!");
    }
    sos:
    printf("To err is human!");
}