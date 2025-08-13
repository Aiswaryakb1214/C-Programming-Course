// chk even or odd no using pointer
#include <stdio.h>

int main()
{
    int num;
    int *p1;
    p1=&num;
    printf("nter a no ");
    scanf("%d",&num);
    if (*p1%2==0)
    {
    printf("it is even\n");
    }
    else
    {
        printf("it is odd\n");
    }
    
   
}