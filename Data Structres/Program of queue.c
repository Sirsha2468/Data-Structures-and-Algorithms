#include<stdio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void insertq(int num);
int delq();
int showq();
void main()
{
	int item,ch;
	do
	{
		printf("\nQueue using array");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("\nInsert item in queue:");
			scanf("%d",&item);
				break;
				case 2:printf("\nDeleted element from queue is:%d",delq());
					break;
					case 3:showq();
						break;
						case 4:break;
						printf("\nEnter a correct choice");
		}
	}
	while(ch!=4);
}
void insertq(int num)
{
	if(rear==MAX-1)//now the queue is full
	{
		printf("\nQueue is full");
		return;
	}
	else
	{
	++front;//pre increment the front value
	QUEUE[++rear]=num;//insert element in queue
	}
}
int delq()
{
	int item;
	if(front == -1)
	{
		printf("\nQueue underflow");
		return 0;
	}
	else
	item=QUEUE[front];
	
	if(front==rear)
	{
		front = rear-1;
	}
	else
	++front;
	return item;
	
}
int showq()
{
	int i;
	if(front == -1)
	{
		printf("\nNo element found queue");
		return 0;
	}
	else
	printf("\nThe queue is:");
	for(i=front;i<=rear;i++)
	printf("%d\n",QUEUE[i]);
}
