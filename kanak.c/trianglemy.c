#include<stdio.h>
int main() 
{  
    for (int i=0; i<9; i++) 
    {
        for (int j=9;j>i; j--)
        {
            printf(" ");
        }
            for (int k=0;k<=i;k++)
            {
                printf("*",k);
            }
            for(int b=1;b<=i;b++)
            {
                printf("*");
            }
        
         printf("\n");
    }
    return 0;
}     