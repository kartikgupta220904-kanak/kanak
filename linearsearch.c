#include<stdio.h>
int main()
{
    int arr[6]={10,20,30,40,50,60};
    int  target=30;
   for(int i=0;i<6;i++)
   {
       if(arr[i]==target)
       {
           printf("Element found at index %d",i);
           return 0;
       }
   }
}
