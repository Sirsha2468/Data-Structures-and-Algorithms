#include<stdio.h>
#define MAX 10
int MYSTACK[MAX], TOP = -1;
void push(int a);
int pop();
int peep();
int main() {
	int data, ch;
	do {
		printf("\n\t\t\t\t\tStack using array\n\t\t\t\t\t1.Push\n\t\t\t\t\t2.Pop\n\t\t\t\t\t3.Peep\n\t\t\t\t\t4.Exit\n\t\t\t\t\tEnter your choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1: printf("Enter value to push: ");
			scanf("%d", &data);
			push(data);
				break;
				case 2: printf("\nPopped value is: %d", pop());
					break;
						case 3: peep();
							break;
							case 4:	return 1;
								break;
							default: printf("Enter correct choice!");
							break;
		}
	}
	while(ch != 4);
}
	void push(int a) {
		if(TOP == MAX - 1) {
			printf("\nStack overflow");
		}
		else
		MYSTACK[++TOP] = a;
	}
	int pop() {
		if(MAX == -1) {
			printf("\nStack underflow");
			return 0;
		}
		return MYSTACK[TOP--];
	}
	int peep() {
		int i;
		if(TOP == -1)
			printf("Stack is empty");
		else
		printf("Stack is: ");
		for(i=TOP; i>=0; i--)
		printf("\n%d", MYSTACK[i]);
	}
