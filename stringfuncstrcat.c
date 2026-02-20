// strcat()
// This function concatenates the sourcestrng at the end of the target string
//  strcpy()
// The function copies the contents of the one string into another. the base addresses of the source and target strings should be supplied to this functon
#include<stdio.h>
void main()
{
    char source[]="Folks!";
    char target[30] = "Hello!";

    strcat(target,source);
    printf("\nsource string = %s", source);
    printf("\ntarget string = %s", target);

}