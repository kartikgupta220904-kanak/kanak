#include<stdio.h>
int main()
{
  int arr[5]={1,2,4,5};
  int i,position=2,num=3;
  for(i=3;i>=position;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[position]=num;
  for(i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;

  
}