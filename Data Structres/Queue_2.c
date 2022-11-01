#include<stdio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void insertq(int num);
int delq();
int showq();
void main()
{
	int choice,item;
	do
	{
		printf("\nQueue using array\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter item in queue:");
			scanf("%d",&item);
			insertq(item);
				break;
				
				case 2:printf("\nDleted data is:%d\n",delq());
						break;
					
					case 3:showq();
						break;
						
						case 4:break;
						default:
						printf("\nInvalid choice");
				}		
	}
	while(choice!=4);
}
void insertq(int num)
{
	if(rear == MAX-1)
	{
	
	printf("\nQueue is full");
	}
		else
	++front;
	QUEUE[++rear] = num;
}
int delq()
{
	int item;
	if(front==-1)
	{
	printf("\nQueue is empty");
	return 0;
	}
	item=QUEUE[front];
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
		
		printf("\nNo element found in queue");
		return 0;
	
	}
	
	printf("\nthe queue is:");
	for(i=front;i<=rear;i++)
	printf("%d",QUEUE[i]);
	return 0;

}
