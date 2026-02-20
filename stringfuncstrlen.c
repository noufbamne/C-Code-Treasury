// strlen()
// Tis function counts the number of characters present in a string 

#include<stdio.h>
void main()
{
    char arr[] = "Bamboozled";
    int len1 , len2;

    len1 = strlen(arr);
    len2 = strlen("Humpty Dumpty");

    printf("\nString = %s length = %d",arr,len1);
    printf("\nString = %s length = %d","Humoty Dumpty",len2);


    
}