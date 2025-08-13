// the question is we need three function ,in first func print the name of  2 students,second fun need marks to nter and calculate their average to get pass/fail and in third func ,it needs to print full details of student with name,mark,pass or fail of students a and b.
#include <stdio.h>
// Declare variables globally so all functions can access them
char a, b;
int c, d, avg;
void name();
void marks();
void details();
int main()
{
    name();
    marks();
    details();
}
void name()
{
    
    printf("name of student 1 : ");
    scanf(" %c",&a);// Add space before %c to remove newline from buffer
    printf("name of student 2 : ");
    scanf(" %c",&b);
    
}
void marks()
{
   
    printf("nter the marks of student 1 : ");
    scanf("%d",&c);
    printf("nter the marks of student 2 : ");
    scanf("%d",&d);
    avg=(c+d)/2;
    if(avg>=50 && avg <=100)
    {
       printf("the students are passed with average marks %d\n",avg); 
    }
    else
    {
        printf("students are failed with average marks %d\n",avg);
    }
   
    
}
void details()
{
    
    printf("\n--- the details of students---\n");
    printf("1: Name: %c  | Marks: %d\n",a,c);
    printf("2: Name: %c  | Marks: %d\n",b,d);
    printf("Average Marks: %d\n", avg);

    
}
