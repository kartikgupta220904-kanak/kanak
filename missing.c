#include<stdio.h>
int main()
    {
    int arr[7]={1,2,3,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array is %d",sum);
    int natural_sum=n*(n+1)/2;
    {
    printf("\nsum of n natural number is %d",natural_sum);
    int missing=natural_sum-sum;
    printf("\nmissing number is %d",missing);
    }
    return 0;
}