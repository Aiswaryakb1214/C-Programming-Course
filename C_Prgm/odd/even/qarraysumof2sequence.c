// question is first we have to print even nos as fixed input and second we have to print odd nos as fixed input then add their values to get that sequence using array
#include <stdio.h>

int main() 
{
    int a[30]={2,4,6,8,10},b[30]={1,3,5,7,9},sum=0,i;
    printf("first input sequence\n");
    for (i=0;i<=5;i++)
    {
    printf("%d\t",a[i]);
    }
    printf("\nsecond input sequence\n");
     for (i=0;i<=5;i++)
    {
    printf("%d\t",b[i]);
    }
    printf("\nsum of 2 sequence\n");
    for (i=0;i<=5;i++)
    {
    sum=a[i]+b[i];
    printf("%d\t",sum);
    }
}