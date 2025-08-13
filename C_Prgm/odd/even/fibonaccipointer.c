// fibonacci series using pointers
#include <stdio.h>

int main() 
{
    int num1=1,num2=1,num,i,sum=0;
    int *p=&num,*p1=&num1,*p2=&num2,*p3=&sum;
    printf("nter a num: ");
    scanf("%d",&num);
    printf("%d\t%d\t",num1,num2);
    for(i=2;i<*p;i++)
    {
        *p3=*p1+*p2;
        printf("%d\t",sum);
        *p1=*p2;
        *p2=*p3;
    }
   
}