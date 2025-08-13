// comparing string first string  input is a name and it is fixed if the username is correct you can continue the code,if it is incorrect it needs to print uername is invalid and dont need to continue the code and second  user input is fixed as a password is equal to user typed password ,print access granted or it is denied ,if it gives access granted permision it need to ask the name,if the user type name1 and need to ask the password of that name1 if it is corect it need to print all the details of first student and it is same for student 2
//name=wow,pass=hello,student=aiswarya,anithra,password=kb,ross
#include <stdio.h>
#include<string.h>
int main() 
{
    char name[20]={"wow"},pass[20]={"hello"},student1[60],word[60];
    int i=0;
    printf("nter the name : \n");
    scanf("%s",&name);
    if (strcmp(name,"wow")==0)
    {
        printf("username is crt\n");
    }
    else
    {
        printf("invalid username\n");
        return 0;
    }
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
                printf("nter the password : \n");
                scanf("%s",&word);
                if (strcmp(word,"kb")==0)
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
                else
                {
                    printf("invalid password");
                }
            }
           
            else if(strcmp(student1,"anithra")==0)
            {
                printf("nter the password : \n");
                scanf("%s",&word);
                if (strcmp(word,"ross")==0)
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
                    printf("invalid password");
                }
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
    