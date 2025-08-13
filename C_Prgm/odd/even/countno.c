#include<stdio.h>
int main()
{
    int num, c = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    if(num == 0)  // Special case: 0 has 1 digit
    {
        c = 1;
    }
    else
    {
        while(num != 0)
        {
            num = num / 10; // remove the last digit
            c++;            // increase digit count
        }
    }

    printf("Number of digits: %d\n", c);
    return 0;
}
