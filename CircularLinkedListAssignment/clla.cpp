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

void displayInRange(node *start, int lower, int upper)
{
    if (start == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    node *temp = start;
    printf("\nNodes within the range %d to %d: ", lower, upper);
    do
    {
        if (temp->data >= lower && temp->data <= upper)
        {
            printf("%d ", temp->data);
        }
        temp = temp->link;
    } while (temp != start);
    printf("\n");
}

int main()
{
    node *start = NULL;
    int lower, upper;

    printf("Circular Linked List Creation:\n");
    start = create(start);

    printf("\nEnter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);

    printf("\nCircular Linked List Nodes:\n");
    displayInRange(start, lower, upper);

    return 0;
}
