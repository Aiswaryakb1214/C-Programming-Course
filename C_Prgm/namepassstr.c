// comparing string first string  input is a name and we need user input to nter password,if the name and password is equal ,print access granted or it is denied ,if the password type 3 times ,print that it will be blocked
#include <stdio.h>
#include<string.h>
int main() 
{
    char name[20],pass[20];
    int i=0;
    printf("nter the name : \n");
    scanf("%s",&name);
    
    for(i=0;i<3;i++)
    {
        printf("nter the password : \n");
        scanf("%s",&pass);
        if (strcmp(pass,name)==0)
        {
            printf("Access granted\n");
            return 0;
        
        }
        else
        {
            printf("Denied\n");
            
        }
    }
    
    printf("Blocked\n");
}