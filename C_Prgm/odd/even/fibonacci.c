#include <stdio.h>

int main() {
    int  num,num1=0,num2=1,sum=0,i=2;

    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("%d  %d\t",num1,num2);
    while(i<num)
    {
        sum=num1+num2;
       printf("%d\t",sum);
       num1=num2;
       num2=sum;
       i++;
       
    }
    
   
}
