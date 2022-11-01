#include<stdio.h>
#define LIMIT 10
int QUEUE[LIMIT];
int front=-1,rear=-1;
int enqueue(int n);
int dqueue( );
int main()
{
    int data,choice;
    do {
        printf("\n\tQueue using array\n\t1.Insert\n\t2.Delete\n\t3.Exit\n\tEnter your choice");
        scanf("%d",&choice);
        switch(choice) {
        case 1:
            printf("Insert an element in queue:");
            scanf("%d",&data);
            enqueue(data);
            break;
        case 2:
            printf("\nDeleted element in queue is:%d",dqueue());
            break;
        case 3:
            break;
            printf("\nEnter correct choice:");
        }

    } while(choice!=3);
}
int	enqueue(int n)
{
    if(rear==LIMIT-1) {
        printf("\n\tQueue is full!");
        return 1;
    }

    rear++;
    QUEUE[rear]=n;
}

int dqueue(int *n)
{
    if(front==-1) {
        printf("\n\tQueue is empty");
        return 1;
    }

    front++;
    n=QUEUE[front];
    return 0;
}
