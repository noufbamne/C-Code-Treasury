// //  strcpy()
// The function copies the contents of the one string into another. the base addresses of the source and target strings should be supplied to this functon
#include<stdio.h>
void main()
{
    char source[]="Sayonara";
    char target[20];

    xstrcpy(target,source);
    printf("\nsource string = %s", source);
    printf("\ntarget string = %s", target);

}
xstrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t ='\0';
    
}