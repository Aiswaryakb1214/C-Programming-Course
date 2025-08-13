//array prgm to print sum of numbers
#include<stdio.h>
int main ()
{
    int a[10],n,i,sum=0;
    printf("nter the nos : ");
    scanf("%d",&n);
    printf("nos are :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    
    }
    printf("sum : %d\n",sum);
}