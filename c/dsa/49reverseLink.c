#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};


struct node *recrev(struct node *head)
{
    if (head->next == NULL || head == NULL)
        return head;
    struct node *rechead = recrev(head->next);
    head->next->next = head;
    head->next = NULL;

    return rechead;
}
//insert at head
void insertAthead(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->next = *head;
    *head = newNode;
}

//insert
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

struct node *reverse(struct node *head);
int main()
{
    struct node *head = NULL;

    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    insertAtTail(&head, 5);

    display(head);
    struct node *newhead = reverse(head);
    printf("\n");
    display(newhead);
    printf("\n");
    struct node *rec1head = recrev(head);
    display(rec1head);
}

struct node *reverse(struct node *head)
{
    struct node *s = head;
    struct node *p = NULL;
    struct node *n;
    while (s != NULL)
    {
        n = s->next;
        s->next = p;
        p = s;
        s = n;
    }

    return p;
}