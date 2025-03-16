#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

//insert at head
void insertAthead(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    struct node *temp = head;
    newNode->next = *head;
    if (head != NULL)
        temp->prev = newNode;
    *head = newNode;
}

// insert at tail
void insertAtTail(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
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
    newNode->prev = temp;
}
int length(struct node *head);
//insert
void insertAtmid(struct node **head, int pos, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    struct node *temp = *head;
    if (pos == 0)
    {
        insertAthead(head, val);
        return;
    }
    while (pos--)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
    {
        newNode->next = temp->next;
        temp->next->prev;
    }
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
int main()
{
    struct node *head = NULL;
    insertAthead(&head, 1);
    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    insertAthead(&head, 5);
    insertAtmid(&head, 4, 6);
    display(head);
    search(head, 6);
    deletion(&head, 4);
    display(head);
}
void deleteAthead(struct node **head)
{
    struct node *todelete = *head;
    *head = todelete->next;
    todelete->prev=NULL;
    free(head);
}
void deletion(struct node **head, int pos)
{
    struct node *temp = *head;
    int count = 0;
    if (head == NULL)
        return;

    if (pos == 1)
    {
        deleteAthead(head);
        return;
    }

    while (temp != NULL && count != pos)
        ;
    {
        temp = temp->next;
        count++;
    }
    temp->next->prev = temp->prev;
    if (temp->next != NULL)
        temp->prev->next = temp->next;

    free(temp);
}