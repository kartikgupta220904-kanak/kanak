#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
    printf("%d\n",arr[i]);
    }
    printf("reverse order\n");
    for(int i=4;i>=0;i--){
    printf("%d\n",arr[i]);
    }
    return 0;
}