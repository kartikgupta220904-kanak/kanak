/*sortin of array*/
#include <stdio.h>
void bubblesort(int ar[5],int n)
{
  for (int i=0;i<n-1;i++)
    {
    for(int j=0;j<n-i-1;j++)
    {
        if(ar[j]>ar[j+1])
        {
            int temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
    }
}
}

int main()
{
    int ar[5]={5,4,3,2,1};
    int n=sizeof(ar)/sizeof(ar[0]);
    bubblesort(ar,n);
    printf("sorted array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;

}