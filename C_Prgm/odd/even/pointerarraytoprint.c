// to print the user input
#include <stdio.h>

int main() 
{
    int arr[50]={1,2,3};
    int *p=arr;
    for(int i=0;i<3;i++)
    {
        printf("%d\t",*(p+i));
    }
}