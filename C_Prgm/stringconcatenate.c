// Concatenate two strings
#include <stdio.h>
#include<string.h>
int main() 
{
    char a[30],b[35];
    int i,x;
    printf("nter a string1: \n");
    scanf("%s",&a);
    printf("nter a string 2: \n");
    scanf("%s",&b);
    strcat(b,a);
    printf("string 2: %s",b);
}