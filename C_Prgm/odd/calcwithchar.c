#include<stdio.h>
int main()
{
    char choose;
    int a,b,c;
   
    printf("a: addition\n b: subtraction\n c: multiplication\n d: division\n ");
    printf("choose ur option\n");
    scanf("%c",&choose);
    printf("nter 2 nos ");
    scanf("%d%d",&a,&b);
    if(choose=='a')
    {
        c=a+b;
        printf("answer is %d",c);
    }
    else if(choose=='b')
    {
        c=a-b;
        printf("answer is %d",c);
    }
    else if(choose=='c')
    {
        c=a*b;
        printf("answer is %d",c);
    }
    else
    {
        c=a/b;
        printf("answer is %d",c);
    }
}