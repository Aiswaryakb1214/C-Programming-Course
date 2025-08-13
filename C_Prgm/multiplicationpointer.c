// multiplication table of userinput no using pointer
#include <stdio.h>
int main()
{
    int num,i,mul=0;
    int *p1;
    p1=&num;
    printf("nter a no ");
    scanf("%d",&num);
    printf("multiplication table of %d\n",num);
    for(i=1;i<=10;i++)
    {
       mul=*p1*i;
       printf("%d*%d=%d\n",num,i,mul);
    }
    
   
}