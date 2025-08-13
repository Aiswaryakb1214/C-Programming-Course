// to print the user input by giving input values
#include <stdio.h>

int main() 
{
    int arr[50],i;
    int *p=arr;
    printf("nter a no : ");
    for(i=0;i<*p;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<*p;i++)
    {
        printf("%d\t",*(p+i));
    }
}