#include<stdio.h>
#define MAX 10
int MYSTACK[MAX],TOP=-1;
void push(int a);
int pop();
int peek();
 main()
{
	int data, ch;
	do
	{
	printf("\nStack using array");
	printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\nEnter value to push:");
		scanf("%d",&data);
		push(data);
			break;
			case 2: printf("\nPopped value is:%d",pop());
				break;
				case 3:peek();
					break;
					case 4: return 1;
							break;
					default:printf("Enter correct choice\n");
						break;
	}
}
while(ch!=4);
}
void push(int a)
{
	if(TOP==MAX-1)
	{
	printf("\nStack Overflow");
	}
	else
		MYSTACK[++TOP]=a;
}
int pop()
{
	if(MAX==-1)
	{
		printf("\nStack underflow");
		return 0;
	}
	return MYSTACK[TOP--];
}
int peek()	
{
	int i;
	if(TOP==-1)
	printf("\nStack is empty");
	else
	printf("\nThe stack is:");
	for(i=TOP;i>=0;i--)
	printf("\n%d",MYSTACK[i]);
}
