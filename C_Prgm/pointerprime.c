// chk prime no using pointer
#include <stdio.h>
int main()
{
    int num,i=2,f=1;
    int *p1;
    p1=&num;
    printf("nter a no ");
    scanf("%d",&num);
    while(i<*p1)
    {
        if (*p1%2==0)
        {
            f=0;
            break;
        }
        i++;
    }
    if(f)
    {
        printf("it is prime\n");
    }
    else
    {
        printf("it is not prime\n");
    }
   
}