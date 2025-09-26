#include<stdio.h>
int main()
{
  int arr[5]={1,2,3,4,5};
  int n,position=2;
  for( int i=position;i<4;i++)
  {
    arr[i]=arr[i+1];
  }
  n--;
  for(int i=0;i<4;i++)
  {
    printf("%d ",arr[i]);
  }
  return 0;

  
}   