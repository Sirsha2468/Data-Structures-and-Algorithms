#include<stdio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void insertq(int num);
int delq();
int shoq();
void main()
{
	int item,choice;
	do
	{
		printf("\nQueue Using Array\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter data to queue:");
			scanf("%d",&item);
			insertq(item);
			break;
			case 2:printf("\nDeleted data is:%d",delq());
			break;
			case 3:showq();
			break;
			case 4:break;
			default:printf("\nEnter correct choice");
		}
	}
	while(choice!=4);
}
	void insertq(int num)
	{
	
	if(rear == MAX-1)
	printf("\nQueue is full");
	else
	++front;
	QUEUE[++rear] = num;
	
	}
	int delq()
	{
		int item;
		if(front == -1)
		{
			printf("\nQueue underflow");
			return 0;
		}
		item = QUEUE[front];
		
		if(front == rear)
		front = rear-1;
		else
		++front;
		return item;
	}
	
	int showq()
	{
		int i;
		if(front == -1)
		{
			printf("\nNo element found in the queue");
			return 0;
		}
		printf("\nThe queue is:");
		for(i=front;i<=rear;i++)
		printf("%d",QUEUE[i]);
		return 0;
	}

