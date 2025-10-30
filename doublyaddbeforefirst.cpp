//add node before a given node in doubly linked list
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
void addbeforefirst(int x)
{
  temp=new node;
  temp->data=x;
  temp->next=first;
  temp->prev=null;
  first->prev=temp;
  first=temp;
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
	addnode(50);
	addnode(60);
    cout<<"\nadd before "<<endl; 
  addbeforefirst(5);

	disp();

}
