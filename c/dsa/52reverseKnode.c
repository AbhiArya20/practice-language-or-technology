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

struct node *reverse(struct node *head, int k);
int main()
{
    int k;
    scanf("%d", &k);
    struct node *head = NULL;

    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    insertAtTail(&head, 5);
    insertAtTail(&head, 6);
    struct node *rec1head = reverse(head, k);
    display(rec1head);
}

struct node *reverse(struct node *head, int k)
{
    struct node *s = head;
    struct node *p = NULL;
    struct node *n;
    int count = 0;
    while (count < k && s != NULL)
    {
        n = s->next;
        s->next = p;
        p = s;
        s = n;
        count++;
    }
    if (n != NULL)
    {

        head->next = reverse(n, k);
    }
    return p;
}