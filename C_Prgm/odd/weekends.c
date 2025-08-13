#include<stdio.h>
int main ()
{
    int n;
    printf("nter a value ");
    scanf("%d",&n);
    if (n==1)
    {
        printf("monday");
        }
     else if (n==2)
     {
         printf("tuesday");
     }  
     else if (n==3)
     {
         printf("wednesday");
     }
     else if (n==4)
     {
         printf("thursday");
     }
     else if (n==5)
     {
         printf("friday");
     }
     else if (n==6)
     {
         printf("saturday");
     }
     else if (n==7)
     {
         printf("sunday");
     }
     else
     {
         printf("invalid");
     }
     
}
#include<stdio.h>
int main ()
{
    int marks;
    printf("nter a value ");
    scanf("%d",&marks);
    if (marks>=100)
    {
        printf("grade A");
    }
    else if(marks>=90) 
    {
        printf("grade B ");
    }
    else  if(marks>=80)
    {
        printf("grade c");
    }
    else if (marks>=70)
    {
        printf("grade D");
    }
    else
    {
        printf("fail");
    }
       
   
}
