//function without arguement n return value
#include <stdio.h>
void pal();
void arm();
int main()
{
    pal();
    arm();
   
}
void pal()
{
    int num,ori,rev=0,rem=0;
    printf("nter a no\n");
    scanf("%d",&num);
    ori=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        
    }
   
    if(ori==rev)
    {
        printf(" it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome\n ");
    }
}
void arm()
{
    int num,ori,res=0,rem=0;
    printf("nter a no\n");
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
        printf("it is an armstrong no\n");
    }
    else
    {
        printf("not an armstrong no\n");
    }
}
