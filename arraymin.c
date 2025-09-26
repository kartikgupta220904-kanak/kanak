#include<stdio.h>
int main()
{
    int arr[5]={10,20,100,40,50};
    int min=arr[0] ;
    for(int i=0;i<5;i++){ 
       if( arr[i]<min){
        min=arr[i];
       }
    }
    printf("%d",min);
    return 0;
 } 