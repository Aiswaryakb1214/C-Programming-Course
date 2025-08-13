// qusetion is to print the details of student with name,roll no,3 subjects name and mark ,and need to print average mark of the student to know pass/fail using union
#include <stdio.h>
#include <string.h>
union student{
        char name[50];
        int rollno;
        char sub[50][40];//to print each subjects marks
        float marks[5];
    };
int main()
{
    union student s1;
    char name[50];// declare this variables once more becoz it will be overwritten
    int rollno;
    char sub[50][40];
    float marks[5];
    
    float total=0;
    
    printf("nter the name: ");
    scanf("%s",s1.name);
     strcpy(name,s1.name);//it needs to copy to another variable becoz of union it will be overwritten and they share memory,one member at a tym only
    
    printf("nter the roll no: ");
    scanf("%d",&s1.rollno);
    rollno=s1.rollno;
    
    for(int i=0;i<3;i++)
    {
        printf("nter the subjects: ");
        scanf("%s",s1.sub[i]);
        strcpy(sub[i],s1.sub[i]);
        
        printf("nter the marks: ");
        scanf("%f",&s1.marks[i]);
        marks[i]=s1.marks[i];
        
        
        total=total+s1.marks[i];
    }
    float avg=total/3;
    
    printf("\nStudent Marklist\n");
    printf("Name: %s\n",name);
    printf("Roll no: %d\n",rollno);
    for(int i=0;i<3;i++)
    {
        printf("Subjects: %s\n",sub[i]);
        printf("Marks: %.2f\n",marks[i]);
    }
    
    printf("Average mark of the student %.2f\n",avg);
    if (avg>=60)
    {
        printf("Result: Passed\n");
    }
    else
    {
        printf("Result: Failed\n");
    }
    
}

