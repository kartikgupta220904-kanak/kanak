#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p,*q,*r,*ptemp,*pttemp,
*ntemp,*nttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}
void addafter(int x,int y)
{
  temp=first;
  while(temp->data!=x)
  temp=temp->next;
  ttemp=temp->next;
  p= new node;
  p->data=y;
  p->next=ttemp;
  temp->next=p;
}
void disp()
{
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
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
  cout<<"\nafter add "<<endl;
    addafter(30,40);
	disp();

}
