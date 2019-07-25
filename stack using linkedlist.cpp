/*STACK USING LINKED LIST*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class stack_using_linkedlist
{
 struct stack
 {
  int data;
  struct stack *next;
 }*top;
 typedef struct stack node;
 public:
 void push();
 void display();
 int pop();
 stack_using_linkedlist();
};
stack_using_linkedlist::stack_using_linkedlist()
{
 top=NULL;
}
int main()
{
 stack_using_linkedlist obj;
 int k,choice;
 while(1)
 {
  cout<<"MAIN MENU\n";
  cout<<"\t\t1.PUSH\n\t\t2.POP\n\t\t3.DISPLAY\n\t\t4.QUIT\n";
  cout<<"\t\tEnter your choice";
  cin>>choice;
  switch(choice)
  {
   case 1:obj.push();
          break;
   case 2:k=obj.pop();
          cout<<"Deleted element from the stack is:"<<k;
          break;
   case 3:obj.display();
          break;
   case 4:exit(0);
  }
 }
}
void stack_using_linkedlist::push()
{
 node *temp;
 temp=new node;
 cout<<"Enter the element\n";
 cin>>temp->data;
 temp->next=top;
 top=temp;
}
int stack_using_linkedlist::pop()
{
 int k;
 node *p,*q;
 p=top;
 k=p->data;
 q=top;
 top=p->next;
 free (q);
 return (k);
}
void stack_using_linkedlist::display()
{
 node *p;
 p=top;
 cout<<"\nElements in the stack are\n";
 if(top!=NULL)
 {
  while(p!=NULL)
  {
   cout<<"-"<<p->data;
   p=p->next;
  }
 }
 else
 cout<<"Stack is empty\n";
}

