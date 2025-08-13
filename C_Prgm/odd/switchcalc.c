#include<stdio.h>
int main()
{
    int choose,a,b,c;
    printf("1: addition\n 2: subtraction\n 3: division\n 4: multiplication\n");
    printf("choose ur option\n");
    scanf("%d",&choose);
    printf("nter 2 nos ");
    scanf("%d%d",&b,&c);
    switch(choose)
    {
        case 1:
        a=b+c;
        printf("addition ans is %d",a);
        break;
        case 2:
        a=b-c;
        printf("subtraction ans is %d",a);
        break;
        case 3:
        a=b/c;
        printf("division ans is %d ",a);
        break;
        case 4:
        a=b*c;
        printf("multiplication ans is %d",a);
        break;
        default :
        printf("error");
        
    }
    
       
    
}