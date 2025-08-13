// Copy one string to another string
#include <stdio.h>
#include<string.h>
int main() 
{
    char a[30],b[30];
    int i,n;
    printf("nter a string1: \n");
    scanf("%s",&a);
    strcpy(b,a);
    printf("string 2: %s",a);
}