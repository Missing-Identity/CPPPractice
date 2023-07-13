#include <stdio.h>
#include <iostream>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if(rear == NULL) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued %d\n", value);
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
        return;
    }
    struct Node *temp = front;
    int value = temp->data;
    if(front == rear) {
        front = NULL;
        rear = NULL;
    }
    else {
        front = front->next;
    }
    free(temp);
    printf("Dequeued %d\n", value);
}

void displayQueue(){
    if(front == NULL){
        printf("Queue is empty\n");
        return;
    }
    struct Node *temp = front;
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    int choice, value;
    do {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(choice != 4);
    return 0;
}