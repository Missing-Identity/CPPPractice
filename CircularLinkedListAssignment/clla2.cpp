#include <stdio.h>
#include <stdlib.h>

struct clist
{
    int data;
    struct clist *link;
};

typedef struct clist node;

node *create(node *start)
{
    node *temp, *ptr;
    char ch;
    int num;
    do
    {
        printf("\nEnter the value of the number: ");
        scanf("%d", &num);
        if (num == 0 && start == NULL)
        {
            printf("First node cannot have a value of 0. Skipping...\n");
            continue;
        }
        temp = (node *)malloc(sizeof(node));
        temp->data = num;
        if (start == NULL)
        {
            start = temp;
            ptr = start;
        }
        else
        {
            ptr->link = temp;
            ptr = ptr->link;
        }
        temp->link = start;
        printf("Do you want to add more nodes (y/n)? ");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
    return start;
}

void removeFirstNode(node **start)
{
    if (*start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    node *first = *start;
    node *second = (*start)->link;
    node *last = *start;
    while (last->link != *start)
    {
        last = last->link;
    }

    if (first->data == 0)
    {
        free(first);
        *start = second;
        last->link = *start;
        printf("First node (with value 0) removed.\n");
    }
    else
    {
        printf("First node does not have a value of 0. Nothing to remove.\n");
    }
}

void display(node *start)
{
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    node *temp = start;
    printf("Circular Linked List Nodes: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->link;
    } while (temp != start);
    printf("\n");
}

int main()
{
    node *start = NULL;

    printf("Circular Linked List Creation:\n");
    start = create(start);

    printf("\nCircular Linked List Nodes:\n");
    display(start);

    printf("\nRemoving first node if its value is 0...\n");
    removeFirstNode(&start);

    printf("\nUpdated Circular Linked List Nodes:\n");
    display(start);

    return 0;
}
