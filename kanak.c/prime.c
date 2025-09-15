#include<stdio.h>
int main()
{
    int n,i,isprime=1;
    printf("enter a no.");
    scanf("%d",&n);
    if (n<=1){
        isprime =0;
    }
    else{
        for(i=2;i<=n/2;i++){
        if(n%i==0)
        isprime= 0;
        break;
    }
    }
 if(isprime)
   printf("%d is prime",n);
   else
   printf("%d is not prime",n);
    return 0;
}