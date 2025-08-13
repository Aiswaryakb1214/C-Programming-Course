// qusetion is to print the details of student with name,roll no,3 subjects name and mark ,and need to print average mark of the student to know pass/fail using structure
#include <stdio.h>
struct student{
        char name[50];
        int rollno;
        char sub[50][40];//to print each subjects marks
        float marks[5];
    };
int main()
{
    struct student s1;
    float total=0;
    
    printf("nter the name: ");
    scanf("%s",&s1.name);
    
    printf("nter the roll no: ");
    scanf("%d",&s1.rollno);
    
    for(int i=0;i<3;i++)
    {
        printf("nter the subjects: ");
        scanf("%s",&s1.sub[i]);
        printf("nter the marks: ");
        scanf("%f",&s1.marks[i]);
        
        total=total+s1.marks[i];
    }
    float avg=total/3;
    
    printf("\nStudent Marklist\n");
    printf("Name: %s\n",s1.name);
    printf("Roll no: %d\n",s1.rollno);
    for(int i=0;i<3;i++)
    {
        printf("Subjects: %s\n",s1.sub[i]);
        printf("Marks: %.2f\n",s1.marks[i]);
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

