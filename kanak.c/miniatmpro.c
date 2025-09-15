#include<stdio.h>
int main()
{
    int choice;

    float balance = 5000,amount;
    printf("\n1:balance \n2:withdraw \n3: deposit \n4:exit");
    printf("\nenter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf(" current balance = %2f",balance);
                 break;
        case 2 : printf(" enter amount to withdraw:");
                scanf("%d",&amount);
                if(amount<=balance){
                    balance -= amount;
                    printf("withdraw successful.new balance =%.2f",amount);
                }
                else{
                   printf("invalid input");
                }
                   break;
        case 3  : printf("enter amount to deposit:");
                  scanf("%d",&amount);
                  balance += amount;
                  printf("deposit successfully .new balance = %.2f",amount);
                  break;
        case 4 : printf("exit");
                 break;
    }return 0;
 }          
                

                