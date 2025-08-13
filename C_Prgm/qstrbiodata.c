// comparing string first string  input is a name and second  user input is fixed,if the password is equal to user typed password ,print access granted or it is denied ,if it gives access granted permision it need to ask the name,if the user type name1 it need to print all the details of first student ,if user type name2 it need to print all the details of second student
#include <stdio.h>
#include<string.h>
int main() 
{
    char name[20],pass[20]={"hello"},student1[30]={"aiswarya"},student2[30]={"anithra"};
    int i=0;
    printf("nter the name : \n");
    scanf("%s",&name);
    
    for(i=0;i<3;i++)
    {
        printf("nter the password : \n");
        scanf("%s",&pass);
        if (strcmp(pass,"hello")==0)
        {
            printf("Access granted\n");
            printf("name of the student: \n");
            scanf("%s",&student1);
            if (strcmp(student1,"aiswarya")==0)
            {
                 printf("Name : Aiswarya K B\n");
                 printf("Age : 23\n");
                 printf("Course : Embedded Systems and IOT\n");
                 printf("Email ID : aiswaryakb14@gmail.com\n");
                 printf("College : Rajagiri School of Engineering and Technology\n");
                 printf("Roll No : RET21EC009\n");
                 printf("Skills : Self-Motivated,Quick Learner,Adaptibility\n");
                 printf("Phone No : +917558808224\n");
                 printf("Language Known : Malayalam,English\n");
            }
           
            else if(strcmp(student1,"anithra")==0)
            {
                printf("Name : Anithra Ross Ajith\n");
                printf("Age : 21\n");
                printf("Course : Embedded Systems and IOT\n");
                printf("Email ID : anithraross@gmail.com\n");
                printf("College : Rajagiri School of Engineering and Technology\n");
                printf("Roll No : RET21EC034\n");
                printf("Skills : Self-Motivated,Quick Learner,Adaptibility\n");
                printf("Phone No : +918374658595\n");
                printf("Language Known : Malayalam,English\n");
            }
            else
            {
                printf("student name is not there in database\n");
            }
            return 0;
        
        }
        else
        {
            printf("Denied\n");
            
        }
    }
    
    printf("Blocked\n");
    
    
    
}