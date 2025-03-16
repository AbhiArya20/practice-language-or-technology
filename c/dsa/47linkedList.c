#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

//insert at head
void insertAthead(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->next = *head;
    *head = newNode;
}

// insert at tail
void insertAtTail(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (*head == NULL)
    {
        insertAthead(head, val);
        return;
    }
    struct node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
int length(struct node *head);
//insert
void insertAtmid(struct node **head, int pos, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    struct node *temp = *head;
    if (pos == 0)
    {
        insertAthead(head, val);
        return;
    }

    newNode->next = NULL;
    newNode->data = val;

    while (--pos)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
        newNode->next = temp->next;
    temp->next = newNode;
}

//display
void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
}
//find length
int length(struct node *head)
{
    struct node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
//seaching
int search(struct node *head, int item)
{
    struct node *temp = head;
    for (int i = 0; i < length(head); i++)
    {
        if (temp->data == item)
        {
            printf("\n%d at %d\n", temp->data, i);
        }
        temp = temp->next;
    }
}
void deletion(struct node **head, int pos);
// int main()
// {
//     struct node *head = NULL;
//     insertAtTail(&head, 1);
//     insertAtTail(&head, 2);
//     insertAtTail(&head, 3);
//     insertAtTail(&head, 4);
//     insertAthead(&head, 5);
//     insertAtmid(&head, 5, 6);
//     display(head);
//     // search(head, 6);
//     // deletion(&head, 6);
//     // display(head);
// }

void deleteAthead(struct node **head)
{
    struct node *todelete = *head;
    *head = todelete->next;
    free(head);
}
void deletion(struct node **head, int val)
{
    struct node *temp = *head;
    if (head == NULL)
    {
        return;
    }

    if (temp->data == val)
    {
        deleteAthead(head);
        return;
    }

    while (temp->next->data != val)

    {
        temp = temp->next;
    }
    struct node *todelete = temp->next;
    temp->next = temp->next->next;

    free(todelete);
}