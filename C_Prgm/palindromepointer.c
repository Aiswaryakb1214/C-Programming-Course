// chk palindrome using pointer
#include <stdio.h>
int main()
{
    int num,i=0,rem=0,rev=0,ori;
    int *p1;
    p1=&num;
    printf("nter a no ");
    scanf("%d",&num);
    ori=*p1;
    while(i<*p1)
    {
        rem=*p1%10;
        rev=rev*10+rem;
        *p1=*p1/10;
    }
    if(rev==ori)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome\n");
    }
}