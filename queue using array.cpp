/*queue using array*/
#include<iostream>
#include<stdlib.h>
#define MAX 5
int rear;
int front;
int a[6];
using namespace std;
class queue_using_array
{
 public:
        void insert();
		void del();
		void display();
		queue_using_array();
 };	   	   
		queue_using_array()
		{
		rear=-1;
		front=-1;
		}
 int main()
 {
  queue_using_array obj;
  int choice;
  while(1)
  {
    cout<<"1.INSERT\n";
	cout<<"2.DELETE\n";
	cout<<"3.DISPLAY\n";
	cout<<"4.QUIT\n";
	cout<<"enter your choice:";
	cin>>choice;
	switch(choice)
	{
	 case 1:obj.insert();
	        break;
     case 2:obj.del();
	        break;
	 case 3:obj.display();
	        break;
	 case 4:exit(1);
	 default:cout<<"WRONG CHOICE\n";
	}
   }
  }
  void queue_using_array::insert()
  {
   int added_item;
   if(rear==(MAX-1))
   cout<<"queue overflow\n";
   else
   {
    if(front ==1)
	front=0;
	cout<<"input the element for adding in queue:";
	cin>>added_item;
	rear=rear+1;
	a[rear]=added_item;
   }
  }
  void queue_using_array::display()
  {
  int i;
  if(front ==-1)
  cout<<"queue is empty\n";
  else
  {
   cout<<"queue is:\n";
   for(i=front ;i<=rear;i++)
   cout<<a[i]<<"\n";
  }
 }
 void queue_using_array::del()
 {
  if(front==-1)
  {
   cout<<"queue underflow\n";
   return;
  
  }   	   	    
  else
  {
   cout<<"element deleted from queue is:\n"<<a[front];
   front=front+1;
  }
 }     
	          	  	   	   	   	   	   	   

