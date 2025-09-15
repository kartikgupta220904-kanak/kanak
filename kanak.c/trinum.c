#include<stdio.h>
int main() 
{  
    int n =4;
    for (int i=0; i<n; i++) 
    {
        for (int j=n;j>i; j--)
        {
            printf(" ");
        }
            for (int k=0;k<=i;k++)
            {
                printf("%d");
            }
            for(int b=1;b<=i;b++)
            {
                printf("%d");
            }
        
         printf("\n");
    }
    return 0;
}     