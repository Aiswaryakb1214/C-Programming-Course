//i need a ipcs global page with username will be fixed by the user if it is correct it need to continue the code if its wrong it need to print invalid username,after ntering crt username next is asking a password which is fixed ,user it typed crt password need to continue all code,user typed wrong password it need to show invalid password
//name=anithra,aiswarya,password=kb,ross
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50],pass[50],word[50];
    printf("\t\t\tIPCS GLOBAL\t\t\t\n");
    printf("enter the username\n");
    scanf("%s",&name);
    if (strcmp(name,"aiswarya")==0)
    {
        printf("nter the password : \n");
        scanf("%s",&word);
        if (strcmp(word,"kb")==0)
        {
            printf("Name : Aiswarya K B\n");
            printf("Age : 23\n");
            printf("Course : Embedded Systems and IOT\n");
            printf("Duration : 4 months\n");
            printf("Current Topic : C prgm\n");
            printf("Email ID : aiswaryakb14@gmail.com\n");
            printf("College : Rajagiri School of Engineering and Technology\n");
        }
        else
        {
            printf("invalid password\n");
        }
    }
     else if(strcmp(name,"anithra")==0)
    {
         printf("nter the password : \n");
         scanf("%s",&word);
         if (strcmp(word,"ross")==0)
         {
             printf("Name : Anithra Ross Ajith\n");
             printf("Age : 21\n");
             printf("Course : Embedded Systems and IOT\n");
             printf("Duration : 4 months\n");
             printf("Current Topic : C prgm\n");
             printf("Email ID : anithraross@gmail.com\n");
             printf("College : Rajagiri School of Engineering and Technology\n");
         }
         else
         {
             printf("invalid password\n");
             return 0;
         }
    }
    else
    {
        printf("invalid username\n");
    }
    
}