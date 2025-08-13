// function with return value and without arguement of palindrome
#include <stdio.h>
int pal();
int main() 
{
    int x;
    x=pal();
    
}
int pal()
{
    int num,ori,rem=0,rev=0;
    printf("nter a num\n");
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
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome");
    }
    return rev;
}