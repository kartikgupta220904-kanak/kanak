#include<stdio.h>
int main()
{
    int arr[5]={10,20,100,40,50};
    for(int i=0;i<5;i++){ 
       if(arr[i]%2==0)
        printf("%d",arr[i]);
       }
}