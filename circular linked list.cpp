/*CIRCULAR LINKED LIST*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class cll
{
 struct list
 {
  int data;
  struct list *next;
 }*head;
 public:
 typedef struct list node;
 cll();
 void create();
 void insert();
 void display();
 int count();
 int deletepos();
 void insertatbeg();
 void insertatmid();
 void insertatend();
 void search();
};
cll::cll()
{
 head=NULL;
}
int main()
{
 int ch,k,c;
 cll obj;
 do
 {
  cout<<"\n\tMAIN MENU\n";
  cout<<"\t\t1.CREATE\n\t\t2.DISPLAY\n\t\t3.INSERT\n\t\t4.DELETEPOS\n\t\t5.COUNT\n\t\t6.SEARCH\n\t\t7.EXIT\n\t\t";
  cout<<"Enter your choice\n";
  cin>>ch;
  switch(ch)
  {
   case 1:obj.create();
          break;
   case 2:obj.display();
          break;
   case 3:obj.insert();
          break;
   case 4:k=obj.deletepos();
          cout<<"\n Deleted element from the position "<<k;
          break;
   case 5:c=obj.count();
          cout<<"\nNo of elements in the list"<<c;
          break;
   case 6:obj.search();
          break;
   case 7:exit(0);
  }
 }while(ch>0&&ch<8);
}
void cll::create()
{
 node *temp,*p;
 temp=new node;
 cout<<"Enter the element\n";
 cin>>temp->data;
 if(head==NULL)
 {
  head=temp;
  temp->next=head;
 }
 else
 {
  p=head;
  while(p->next!=head)
  p=p->next;
  temp->next=head;
  p->next=temp;
 }
}
void cll::display()
{
 node *q;
 q=head;
 cout<<"\nElements in the list are\n";
 if(q==head)
 {
  do
  {
   cout<<"-"<<q->data;
   q=q->next;
  }while(q!=head);
 }
 else
 cout<<"List is empty\n";
}
int cll::count()
{
 node *p;
 int c=0;
 p=head;
 do
 {
  p=p->next;
  c++;
 }while(p!=head);
 return (c);
}
void cll::search()
{
 int f=0,k;
 node *p;
 p=head;
 cout<<"Enter the element you want to fin\n";
 cin>>k;
 do
 {
  if(p->data==k);
  {
   f=1;
   cout<<"Element found\n";
  }
  p=p->next;
 }while(p!=head);
 if(f==0)
 {
  cout<<"Element not found\n";
 }
}
void cll::insert()
{
 int ch;
 do
 {
  cout<<"\n\t\t1.INSERTATBEG\n\t\t2.INSERTATMID\n\t\t3.INSERTATEND\n";
  cout<<"Enter the choice\n";
  cin>>ch;
  switch(ch)
  {
   case 1:insertatbeg();
          break;
   case 2:insertatmid();
          break;
   case 3:insertatend();
          break;
   default:break;
  }
 }while(ch>0&&ch<4);
}
void cll::insertatbeg()
{
 node *temp,*p;
 temp=new node;
 cout<<"Enter the inserted element\n";
 cin>>temp->data;
 temp->next=head;
 p=head;
 while(p->next!=head)
 p=p->next;
 p->next=temp;
 head=temp;
}
void cll::insertatmid()
{
 node *temp,*p;
 int key;
 temp=new node;
 cout<<"Enter the elements\n";
 cin>>temp->data;
 cout<<"Enter the key element\n";
 cin>>key;
 p=head;
 do
 {
  if(p->data==key)
  {
   temp->next=p->next;
   p->next=temp;
  }
  p=p->next;
 }while(p!=head);
}
void cll::insertatend()
{
 node *temp,*p;
 temp=new node;
 cout<<"Enter the element\n";
 cin>>temp->data;
 if(head==NULL)
 {
  head=temp;
  temp->next=head;
 }
 else
 {
  p=head;
  while(p->next!=head)
  p=p->next;
  temp->next=head;
  p->next=temp;
 }
}
int cll::deletepos()
{
 node *p;
 int pos,i,k;
 cout<<"\nEnter the position for deletion";
 cin>>pos;
 if(head!=NULL)
 {
  if(pos==1)
  {
   k=head->data;
   head=head->next;
   return (k);
  }
  else
  {
   i=2;
   p=head;
   while(i<pos)
   {
    p=p->next;
    i++;
   }
   k=p->next->data;
   p->next=p->next->next;
   return (k);
  }
 }
 else
 cout<<"\n\tList is empty";
}

