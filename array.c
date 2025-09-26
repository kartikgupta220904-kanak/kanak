2#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter 5 elements in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements in array are\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
/*non primitive data type,store similar multiple data */