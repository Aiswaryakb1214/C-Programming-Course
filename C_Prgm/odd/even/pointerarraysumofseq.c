// question is first we have to print even nos as fixed input and second we have to print odd nos as fixed input then add their values to get that sequence as a array using pointer
#include <stdio.h>

int main() 
{
    int a[30]={2,4,6,8,10},b[30]={1,3,5,7,9},sum[30],i;
    int *p1,*p2,*p3;
    p1=a;
    p2=b;
    p3=sum;
    printf("first input sequence\n");
    for (i=0;i<5;i++)
    {
    printf("%d\t",*(p1+i));
    }
    printf("\nsecond input sequence\n");
     for (i=0;i<5;i++)
    {
    printf("%d\t",*(p2+i));
    }
    printf("\nsum of 2 sequence\n");
    for (i=0;i<5;i++)
    {
    *(p3+i)=*(p1+i)+*(p2+i);
    printf("%d\t",*(p3+i));
    }
}