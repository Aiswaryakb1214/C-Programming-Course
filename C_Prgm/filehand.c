// Online C compiler to run C program online
#include <stdio.h>
int main() 
{
    FILE *fp;
    fp = fopen("samplefile.txt","w");
    fprintf(fp,"leran c");
    fclose(fp);
}