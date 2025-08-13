//Write a program to print the following pattern using nested for loops:
//*
//* *
//* * *
//* * * *

#include <stdio.h>

int main() 
{
    int i,j;
    for(i=1;i<=4;i++)//for rows
    {
        for(j=1;j<=i;j++)//inner loop for printing
        {
            printf("*");
        }
        printf("\n");
    }
       
   
      
    
    
}
    