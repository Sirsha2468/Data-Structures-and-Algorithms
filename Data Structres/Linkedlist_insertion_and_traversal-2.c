#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node * next; // Pointer of type struct
};

void linkedListTraversal(struct Node * ptr)
{
	while(ptr != NULL) {
		printf("Element: %d\n", ptr -> data);
		ptr = ptr -> next; // Pointer is now pointing to the next node
	}

}
int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	struct Node * fifth;
	struct Node * sixth;
	// Allocate memory for nodes in the linked list
	head = (struct Node * ) malloc(sizeof(struct Node));
	second = (struct Node * ) malloc(sizeof(struct Node));
	third = (struct Node * ) malloc(sizeof(struct Node));
	fourth = (struct Node * ) malloc(sizeof(struct Node));
	fifth = (struct Node * ) malloc(sizeof(struct Node)); 
	sixth = (struct Node * ) malloc(sizeof(struct Node));
	
	// Link first and second nodes
	head -> data = 7;
	head -> next = second;
	
	// Link second and third nodes
	second -> data = 14;
	second -> next = third;
	
	// Link third and fourth nodes
	third -> data = 26;
	third -> next = fourth;	
	
	// Link fourht and fifth nodes
	fourth -> data = 380;
	fourth -> next = fifth;
	
	// Link fifth and sixth nodes	
	fifth -> data = 42;
	fifth -> next = sixth;
	
	// Terminate the list at the  fifth node
	sixth -> data = 660;
	sixth -> next = NULL;
	
	linkedListTraversal(head);
	return 0;
}

