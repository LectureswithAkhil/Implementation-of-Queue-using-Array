#include<iostream>
using namespace std; 
int a[5];
int rear=-1;
int front=-1;
bool isempty()
{
if(front==-1 && rear==-1)
return true;
else
return false;
}
void enqueue(int value)
{
	if(rear==4)
	cout<<"queue is full \n ";
	else
	{
		if(front=-1)
		front=0;
		rear++;
		a[rear]=value;
	}
}
void dequeue()
{
	if(isempty())
	cout<<"queue is empty \n";
	else
	if(front==rear)
	front=rear=-1;
	else
	front++;
}
void peek()
{
	if(isempty())
	cout<<"queue is empty \n";
	else
	{
		cout<<"element at front is:"<<a[front]<<"\n";
	}
	
}
void display()
{
	if(isempty())
	cout<<"queue is empty \n";
	else
	{
		for (int i=front;i<=rear;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
	}
	
}
int main()
{
	cout<<"Inserting the elements in the Queue";
	enqueue(1);
	display();
	enqueue(2);
	display();
	enqueue(5);
	display();
	enqueue(16);
	display();
	enqueue(17);
	display();
	enqueue(7);
	peek();
	cout<<"removing elements";
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	dequeue();
	display();
	return 0;
	
}
