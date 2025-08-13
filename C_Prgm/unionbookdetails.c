// print book details using union
#include <stdio.h>
#include <string.h>

union  book{
    char name[50];
    float price;
    int pages;
};
int main() 
{
    union book b1;
    
    printf("\nBook Details\n");
    
    strcpy(b1.name, "harry");
    printf("Name: %s\n",b1.name);
    
    b1.price=78.987;
    printf("Price: %.2f\n",b1.price);
    
    b1.pages=101;
    printf("Pages: %d",b1.pages);
}