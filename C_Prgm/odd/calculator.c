#include<stdio.h>
int main()
{
    int choose,a,b,c;
   
    printf("1: addition\n 2: subtraction\n 3: multiplication\n 4: division\n ");
    printf("choose ur option\n");
    scanf("%d",&choose);
    printf("nter 2 nos ");
    scanf("%d%d",&a,&b);
    if(choose==1)
    {
        c=a+b;
        printf("answer is %d",c);
    }
    else if(choose==2)
    {
        c=a-b;
        printf("answer is %d",c);
    }
    else if(choose==3)
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