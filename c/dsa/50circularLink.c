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
    struct node *temp = *head;
    if (*head == NULL)
    {
        newNode->next = newNode;
        *head = newNode;
        return;
    }
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    newNode->next = *head;
    temp->next = newNode;
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
    while (temp->next != *head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = *head;
}
int length(struct node *head);
//insert
void insertAtmid(struct node **head, int pos, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
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
    if (temp->next == *head)
    {
        insertAtTail(head, val);
        return;
    }

    if (temp->next != *head)
        newNode->next = temp->next;
    temp->next = newNode;
}

//display
void display(struct node *head)
{
    struct node *temp = head;
    do
    {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);
}
//find length
int length(struct node *head)
{
    struct node *temp = head;
    int count = 0;
    do
    {
        temp = temp->next;
        count++;
    } while (temp != head);
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
void deletion(struct node **head, int val);
int main()
{
    struct node *head = NULL;
    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    insertAtmid(&head, 3, 5);
    insertAthead(&head, 3);
    
    display(head);
}
void deleteAthead(struct node **head)
{
    struct node *todelete = *head;
    struct node *temp = *head;
    do
    {
        temp = temp->next;
    } while (temp->next != *head);
    temp->next = temp->next->next;
    *head = temp->next;
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