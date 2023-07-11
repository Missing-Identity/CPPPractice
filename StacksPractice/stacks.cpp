#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#define MAX 10
#define MAX2 10
#define MAX3 20

typedef struct stack1{
    int top;
    int arr[MAX];
} node;

typedef struct stack2{
    int top;
    int arr[MAX2];
} node2;

typedef struct stack3{
    int top;
    int arr[MAX3];
} node3;

void push1(node *s, int item){
    if(s->top == MAX - 1){
        printf("Stack Overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top] = item;
        printf("Pushed %d\n", item);
    }
    getchar();
}

void pop1(node *s){
    if(s->top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Popped %d\n", s->arr[s->top]);
        s->top--;
    }
    getchar();
}

void push2(node2 *s, int item){
    if(s->top == MAX2 - 1){
        printf("Stack Overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top] = item;
        printf("Pushed %d\n", item);
    }
    getchar();
}

void pop2(node2 *s){
    if(s->top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Popped %d\n", s->arr[s->top]);
        s->top--;
    }
    getchar();
}

void clear(node3 *s){
    s->top = -1;
}

int main(){
    int i, j, item;
    node s1;
    node2 s2;
    node3 *s3;
    s1.top = -1;
    s2.top = -1;
    s3->top = -1;
    while(1){
        printf("1. Push in Stack 1\n");
        printf("2. Pop from Stack 1\n");
        printf("3. Push in Stack 2\n");
        printf("4. Pop from Stack 2\n");
        printf("5. Merge 2 Stacks into Stack 3\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &i);
        switch(i){
            case 1:
                printf("Enter the item: ");
                scanf("%d", &item);
                push1(&s1, item);
                break;
            case 2:
                pop1(&s1);
                break;
            case 3:
                printf("Enter the item: ");
                scanf("%d", &item);
                push2(&s2, item);
                break;
            case 4:
                pop2(&s2);
                break;
            case 5:
                for(j = 0; j <= s1.top; j++){
                    s3->top++;
                    s3->arr[s3->top] = s1.arr[j];
                    printf("Pushed %d\n", s1.arr[j]);
                }
                for(j=0; j <= s2.top; j++){
                    s3->top++;
                    s3->arr[s3->top] = s2.arr[j];
                    printf("Pushed %d\n", s2.arr[j]);
                }
                printf("The elements of Stack 3 are: ");
                for(j = 0; j <= s3->top; j++){
                    printf("%d ", s3->arr[j]);
                }
                printf("\n");
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
}

