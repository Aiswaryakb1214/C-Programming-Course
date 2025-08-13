// Create a structure for a product:,Product Name,Product ID,Quantity in Stock,Price per Unit,,Accept details of 3 products and calculate the total value (quantity × price) of each product.
#include <stdio.h>

struct product{
    char name[50][30];
    int id[30];
    int quan[30];
    float price[50];
};
int main() 
{
    struct product p1;
    int i=0;
    float total=0;
    
   for(i=0;i<3;i++)
   {
       printf("nter the name: ");
       scanf("%s",&p1.name[i]);
       
       printf("nter the id: ");
       scanf("%d",&p1.id[i]);
       
       printf("nter the quantity: ");
       scanf("%d",&p1.quan[i]);
       
       printf("nter the price: ");
       scanf("%f",&p1.price[i]);
       
       
   }
   
   printf("\n Product Details\n");
   for (i=0;i<3;i++)
   {
       total=p1.quan[i]*p1.price[i];
       printf("Name: %s\n",p1.name[i]);
       printf("Product id: %d\n",p1.id[i]);
       printf("Product quantity: %d\n",p1.quan[i]);
       printf("Product price: %.2f\n",p1.price[i]);
       printf("Total price: %.2f\n",total);
   }
}