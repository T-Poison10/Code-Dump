// code linked list in c where refrence are autoamtically added to the next node
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    display();
    return 0;
}
