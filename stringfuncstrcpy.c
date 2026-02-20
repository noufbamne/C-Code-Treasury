//  strcpy()
// The function copies the contents of the one string into another. the base addresses of the source and target strings should be supplied to this functon
#include<stdio.h>
void main()
{
    char source[]="Sayonara";
    char target[20];

    strcpy(target,source);
    printf("\nsource string = %s", source);
    printf("\ntarget string = %s", target);

}