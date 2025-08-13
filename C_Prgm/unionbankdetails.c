// bank accout details,Create a structure to store:Account holder name,Account number,Balance and accept the details  2 account holders and check if balance is below ₹1000. If yes, print the details of that account holder using union


#include<stdio.h>
#include<string.h>

union bank{
    char name[10];
    int no;
    float balance;
};
int main()
{
    union bank b;
    
    char name[10][20];
    int no[10];
    float balance[10];
    
    int i=0;
    for(i=0;i<2;i++)
    {
        printf("nter the name: ");
        scanf("%s",b.name);
        strcpy(name[i],b.name);
        
        printf("nter the accno: ");
        scanf("%d",&b.no);
        no[i]=b.no;
        
        printf("nter the balance: ");
        scanf("%f",&b.balance);
        balance[i]=b.balance;
    }
    printf("\nBank Details of Low balance warning\n");
    for(i=0;i<2;i++)
    {
       if(balance[i]<1000)
       {
    
        printf("Name: %s\n",name[i]);
        printf("Accno: %d\n",no[i]);
        printf("Balance: %.2f\n",balance[i]);
       }
    }
}