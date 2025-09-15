#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1,j=10;i<=j;i++){
    printf("\n%d * %d =%d",n,i,n*i);
    }
    return 0;
}