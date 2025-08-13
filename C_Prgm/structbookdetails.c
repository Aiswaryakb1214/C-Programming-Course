// print book details using structure function
#include <stdio.h>

 struct book
 {
    char title[30];
    char author[40];
    float price;
     
 };
    int main()
    {
        struct book b1;
        printf("nter title: ");
        scanf("%s",&b1.title);
        
        printf("nter authorname: ");
        scanf("%s",&b1.author);
        
        printf("nter the price: ");
        scanf("%f",&b1.price);
        
        printf("\nBook Info\n");
        printf("Title: %s\n", b1.title);
        printf("Authorname: %s\n", b1.author);
        printf("Price: %.2f\n", b1.price);
    }
    
    
