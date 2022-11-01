#include<stdio.h>
#define MAX 10
int QUEUE[MAX],front=-1,rear=-1;
void insertq(int num);
int delq();
int showq();
 main()
{
	int item,choice;
	do

	{
		printf("\n\tQueue\n\t1.Insert\n\t2.Delete\n\t3.Display\n\t4.Exit");
		printf("\n\tEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)

		{

			case 1:printf("\n\tEnter data to queue: ");
			scanf("%d",&item);
			insertq(item);
			break;
			
			case 2:printf("\n\tDeleted data is: %d",delq());
			
				break;
				
				case 3:showq();
				
				break;
				case 4:break;
				default:printf("\nEnter correct choice: ");
		}
		
	
	}	while(choice!=4);
}
	void insertq(int num)

	{

	if(rear == MAX-1)

	{

		printf("\n\tQueue Overflow");
		return;

	}
	
	else
	{
	
		++front;
		QUEUE[++rear] = num;	
	}
}
		int delq()

		{

			int item;
			if(front==-1)

			{

				printf("\n\tQueue underflow!");
				return 0;

			}

			item=QUEUE[front];
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

				printf("\n\tNo eliment found in queue");
				return 0;
			}
		
		printf("\nThe queue is:");
		for(i=front;i<=rear;i++)
	

			printf(" %d",QUEUE[i]);
			return 0;
		}


