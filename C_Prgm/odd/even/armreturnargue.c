//function with return value and with arguement for armstrong
#include<stdio.h>
int arm(int);//for return value we use 'int'
int main()
{
    int num,x;
    printf("nter a no : \n");
    scanf("%d",&num);
    x=arm(num);
    
}
int arm(int n)
{
   int res=0,rem=0,ori;
   ori=n;
  while(n>0)
  {
      rem=n%10;
      res=res+(rem*rem*rem);
      n=n/10;
  }
      if(ori==res)
      {
          printf("it is armstrong\n");
      }
      else
      {
          printf("it is not armstrong\n");
      }
      
  
   return res;
   
}