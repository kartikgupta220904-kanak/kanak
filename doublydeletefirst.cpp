#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val){

  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  ttemp->prev=temp;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=new node;
    first->data=val; 
    first->next=null; 
    first->prev=null;
   
    
}
void deletefirst()
{
  
    temp=first;
    first=first->next;
    first->prev=null;
    temp->next=null;
    delete temp;//delete - deallocates the memory
    
}
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<" ";
   temp=temp->next;
 }
}

int main()
{
	init();
	createfirst(10);
	addnode(20);
	addnode(30);
	addnode(40);
	addnode(50);
    cout<<"\ndelete first node "<<endl; 
  deletefirst();

	disp();

}
