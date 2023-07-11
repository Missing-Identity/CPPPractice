#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define MAX 10

typedef struct queue{
    int front;
    int rear;
    int arr[MAX];
} node;

void enqueue(node *q, int item){
    if(q->rear == MAX - 1 && q->front == 0){ // full queue
        printf("Queue Overflow\n");
    }
    else if (q->front == -1) // empty queue
    {
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = item;
        printf("Enqueued %d\n", item);
    }
    else if(q->rear == MAX -1){ // rear is at the end of the queue
        q->rear = 0;
        q->arr[q->rear] = item;
        printf("Enqueued %d\n", item);
    }
    else{ // normal case
        q->rear = q->rear + 1;
        q->arr[q->rear] = item;
        printf("Enqueued %d\n", item);
    }
    getchar();
}

void dequeue(node *q){
    if(q->front == -1){ // empty queue
        printf("Queue Underflow\n");
    }
    else if(q->front == q->rear){ // only one element in queue
        printf("Dequeued %d\n", q->arr[q->front]);
        q->front = -1;
        q->rear = -1;
    }
    else if(q->front == MAX - 1){ // front is at the end of the queue
        printf("Dequeued %d\n", q->arr[q->front]);
        q->front = 0;
    }
    else{ // normal case
        printf("Dequeued %d\n", q->arr[q->front]);
        q->front = q->front + 1;
    }
    getchar();
}

void divisiblity(node *q){
    printf("Values divisible by 3 but not 5:\n");
    for(int i = q->front; i <= q->rear; i++){
        if(q->arr[i] % 3 == 0 && q->arr[i] % 5 != 0){
            printf("%d\n", q->arr[i]);
        }
    }
}

int main(){
    int choice, item;
    node q;
    q.front = -1;
    q.rear = -1;
    while(1){
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Print all values divisible by 3 but not 5\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the item to be enqueued: ");
                scanf("%d", &item);
                enqueue(&q, item);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                divisiblity(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
                getchar();
        }

    }
}