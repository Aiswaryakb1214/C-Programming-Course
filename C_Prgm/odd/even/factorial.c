#include <stdio.h>

int main() {
    int  num,i=1,f=1;

    printf("Enter the number:\n");
    scanf("%d", &num);
    if(num<=0)
    {
        printf("there is no factorial\n");
    }
    while(i<=num)
    {
    
        f=f*i;
        i++;
    }
    printf("factorial of a no is %d",f);
    

   
}
