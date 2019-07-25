/*STACK USING ARRAY*/
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define MAX 5
int a[5];
int top;
using namespace std;
class stack_using_array
{
 public:
 void push();
 void pop();
 void display();
 stack_using_array();
};
stack_using_array::stack_using_array()
{
  top=-1;
}
int main()
{
 stack_using_array obj;
 int choice;
 while(1)
 {
  cout<<"\t\t1.PUSH\n\t\t2.POP\n\t\t3.DISPLAY\n\t\t4.QUIT\n";
  cout<<"Enter your choice\n";
  cin>>choice;
  switch(choice)
  {
   case 1:obj.push();
          break;
   case 2:obj.pop();
          break;
   case 3:obj.display();
          break;
   case 4:exit(1);
   default:cout<<"Wrong choice\n";
  }
 }
}
void stack_using_array::push()
{
 int pushed_item;
 if(top==(MAX-1))
 cout<<"Stack overflow\n";
 else
 cout<<"Enter the item to be pushed into the stack:";
 cin>>pushed_item;
 top=top+1;
 a[top]=pushed_item;
}
void stack_using_array::display()
{
 int i;
 if(top==-1)
 cout<<"Stack is empty\n";
 else
 {
  cout<<"Stack elements:\n";
  for(i=top;i>=0;i--)
  cout<<a[i]<<"\n";
 }
}
void stack_using_array::pop()
{
 if(top==-1)
 cout<<"Stack underflow\n";
 else
 {
  cout<<"Popped element is:\n"<<a[top];
  top=top-1;
 }
}

