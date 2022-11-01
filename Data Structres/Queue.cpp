#include<stdio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void inserq(int num);
int delq();
int showq();
int main()
{
	int item,choice;
	do
	{
		printf("\n\tQueue Using Array\n\n\t1.Insert\n\t2.Delete\n\t3.Display\n\t4.Exit\n\tEnter Ypur Choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("\nEnter Data To Insrt:");
			scanf("%d",&item);
			insertq(item);
			break;
			case 2:printf("Deleted Data Is:%d",delq());
			break;
			case 3:showq()
			break;
			case 4:break;
			default:printf("Enter The Correct Choice:");
		}
			}while(choice!=4);
}
void insertq(int num)
{
if(rear=MAX-1)
{
	printf(Queue Overflow);
	return 0;
	}
	if(rear==-1)
	++front;
	queue[++rear]=num;
}
void delq()
{
	int item;
	if(front==-1)
	{
		printf("\nQueue Underflow");
		return 0;
	}
	item=queue[front];
	if(front==rear)
	front=rear-1;
	else
	++front;
	return item;
}
int showq()
{
	int i;
	if(front==-1)
	{
		printf("\nNo Element Found in Queue!");
		return 0;
	}
	printf("\nThe Queue Is:");
	for(i=front;i<=rear;i++)
	printf("%d",QUEUE[i]);
	return 0;
}
