// function with arguement of armstrong
#include <stdio.h>
void arm(int);
int main() 
{
   int num;
   printf("nter a no\n");
   scanf("%d",&num);
   arm(num);
}
void arm(int x)
{
    int res=0,rem=0,ori;
    ori=x;
    while(x>0)
    {
        rem=x%10;
        res=res+(rem*rem*rem);
        x=x/10;
    }
    if(ori==res)
    {
        printf("it is armstrong\n");
    }
    else
    {
        printf("it is not armstong\n");
    }
}