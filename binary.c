/*binary search*/
#include <stdio.h>
int binarysearch(int ar[],int n)
{
    int s=0;
   int end=4;
   int t=4;
    while(s<=end)
    {
         int mid=(s+end)/2;
         if(ar[mid]==t)
         {
              return mid;
         }
         else if(ar[mid]<t)
         {
              s=mid+1;
         }
         else
         {
              end=mid-1;
         }
    }

}
int main()
{
    int ar[5]={1,2,3,4,5};
    int n=sizeof(ar)/sizeof(ar[0]);
    int result=binarysearch(ar,n);
    if(result==-1)
    {
        printf("element not found");
    }
    else
    {
        printf("element found at index %d",result);
    }
}