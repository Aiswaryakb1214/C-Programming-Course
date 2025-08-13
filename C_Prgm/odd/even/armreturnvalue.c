// function with return value and without arguement of armstrong
#include <stdio.h>
int arm();
int main() 
{
    int x;
    x=arm();
   
    
}
int arm()
{
    int num,ori,rem=0,res=0;
    printf("nter a num\n");
    scanf("%d",&num);
    ori=num;
    while(num>0)
    {
        rem=num%10;
        res=res+(rem*rem*rem);
        num=num/10;
    }
    if(ori==res)
    {
        printf("it is armstrong \n");
    }
    else
    {
        printf("it is not armstrong ");
    }
    return res;
}