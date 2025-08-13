// menu driven program of student using function
#include <stdio.h>
void name1();
void name2();
int main() 
{
    int choice;
    printf("1: biodata of student 1\n2: biodata of student 2\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    if (choice==1)
    {
    name1();
    }
    else if (choice==2)
    {
    name2();
    }
    else
    {
        printf("it is invalid\n");
    }
   
}
void name1()
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
void name2()
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
