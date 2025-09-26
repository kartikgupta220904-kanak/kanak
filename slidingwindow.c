#include<stdio.h>
int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    int k=2;    
    int n=sizeof(arr)/sizeof(arr[0]);
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum+=arr[i];
    }
    int maxsum=windowsum;
    for(int j=k;j<n;j++){
        windowsum+=arr[j]-arr[j-k];
        if(windowsum>maxsum){
            maxsum=windowsum;
        }
    }
    printf("%d",maxsum);
    return 0;
}