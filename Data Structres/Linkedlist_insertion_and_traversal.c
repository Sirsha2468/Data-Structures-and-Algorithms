#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next; // Pointer of type struct
};

void linkedListTraversal(struct Node* ptr)
{
    while(ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr -> next; // pointer is now pointing to the next node and it will run till it's point to the NULL
    }

}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node * ) malloc(sizeof(struct Node));
    second = (struct Node * ) malloc(sizeof(struct Node));
    third = (struct Node * ) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 12;
    second->next = third;

    // Link third and fourth nodes
    third->data = 26;
    third->next = fourth;

	// Terminate the list at the third node
    fourth->data = 66; // let's say 66
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}
