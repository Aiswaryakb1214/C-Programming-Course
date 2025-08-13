//factorial nos using pointer
#include <stdio.h>

int main()
{
    int num,f=1,i;
    int *p1,*p2;
    p1=&num;
    p2=&f;
    printf("nter a no : ");
    scanf("%d",&num);
    printf("factorial of %d\n",num);
    for(i=1;i<=*p1;i++)
    {
        *p2=*p2*i;
    }
    printf("%d",f);
}