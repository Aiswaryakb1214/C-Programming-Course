// print ascending order of nos using pointer
#include <stdio.h>

int main() 
{
    int a[50],i,j,temp,num;
    int *p,*p1;
    p=&num;
    printf("nter a no : ");
    scanf("%d",&num);
    printf("nter the digits :\n");
    for(i=0;i<*p;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<*p;i++)
    {
        for(j=0;j<*p;j++)
        {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(j=0;j<*p;j++)
    {
    printf("%d\t",a[j]);
    }
}
