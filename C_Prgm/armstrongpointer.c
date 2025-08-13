// chk armstrong using pointer
#include <stdio.h>
int main()
{
    int num,i=0,rem=0,res=0,ori;
    int *p1;
    p1=&num;
    printf("nter a no ");
    scanf("%d",&num);
    ori=*p1;
    while(i<*p1)
    {
        rem=*p1%10;
        res=res+(rem*rem*rem);
        *p1=*p1/10;
    }
    if(res==ori)
    {
        printf("it is armstrong\n");
    }
    else
    {
        printf("it is not armstrong\n");
    }
}