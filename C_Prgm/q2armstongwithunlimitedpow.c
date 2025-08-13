// Question is print whether the no is armstrong or not ,first we need 3 functions ,first fun is for check the length  of digits and second func is used when we nter any length numbers it need to assume the power to get armstrong or not and third func is used to check whether the number is armstrong or not.
#include <stdio.h>
int length(int num);
int power(int num,int digits);
void arm(int num);
int main() 
{
    int number;
    printf(" nter the number: ");
    scanf("%d",&number);
    arm(number);
}
int length(int num)
{
    int count=0;
    while(num>0)
    {
        num=num/10;
        count++;
    
    }
    return count;
}
int power(int num,int digits)
{
    int sum=0,rem=0,power=0,i;
   while(num>0)
   {
       
       rem=num%10;
       power=1;
       for(i=0;i<digits;i++)
       {
           power=power*rem;
       }
       sum=sum+power;
       num=num/10;
   }
   return sum;
}
void arm(int num)
{
    int digits=length(num);
    int sum=power(num,digits);
    
    if (sum==num)
    {
        printf("it is armstong no: %d",num);
    }
    else
    {
        printf("it is not an armstrong no: %d",num);
    }
}
