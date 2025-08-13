// bank accout details,Create a structure to store:Account holder name,Account number,Balance,Print the details and check if balance is below ₹1000. If yes, print "Low Balance Warning"
#include <stdio.h>

struct bank{
    char name[50];
    int accno;
    float balance;
};
int main() 
{
    struct bank b1;
    
    printf("nter acc holder name: ");
    scanf("%s",&b1.name);
    
    printf("nter acc no: ");
    scanf("%d",&b1.accno);
    
    printf("nter balance: ");
    scanf("%f",&b1.balance);
    
    printf("\nBank Acc Details\n");
    printf("Acc holder name: %s\n",b1.name);
    printf("Acc no: %d\n",b1.accno);
    printf("Acc balance: %.2f\n",b1.balance);
    
    if (b1.balance<1000)
    {
        printf("Low balance warning ");
    }
    else
    {
        printf("Thanku for keeping our bank");
    }
}