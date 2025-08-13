
#include<stdio.h>
int main()
{
    int choose;
    printf("1: monday\n 2: tuesday\n 3: wednesday\n 4: thursday\n 5: friday\n 6: saturday\n 7: sunday\n");
    printf("choose ur option\n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
        default :
        printf("error");
    }
    
       
    
}