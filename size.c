#include<stdio.h>
int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=0;
    for(int i=0;i<n-k;i++){
        int currentsum=0;
        for(int j=i;j<i+k;j++){
            currentsum+=arr[j];
        }
        if(currentsum>maxsum){
            maxsum=currentsum;
        }
}
    printf("%d",maxsum);
    return 0;
}