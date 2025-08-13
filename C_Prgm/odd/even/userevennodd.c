//user nter a digit and separate it even nos n odd nos

#include <stdio.h>

int main() 
{
    int nums,highest=0,digit,original;
    printf("nter the nos: ");
    scanf("%d",&nums);
     original=nums;   
    printf("even no : \n");
    while(nums!=0)
    {
           
        digit=nums%10;//last digit
        if(digit%2==0)
          {
            
             printf("%d\n",digit);
          }
           nums=nums/10;
    }
    printf("odd no is : \n");
    nums=original;
    while(nums!=0)
    {
               
              digit=nums%10;
              if(digit%2!=0)
             {
            
               printf("%d\n",digit);
             
             }
              nums=nums/10;
    }
       
        
          
        
      
          
           
    
    
}
   
        
        
    
    

    