#include "47linkedlist.c"
#include <stdbool.h>
void makecycle(struct node **head, int pos)
{
    struct node *temp = *head;
    struct node *start;
    int count = 0;
    while (temp->next != NULL)
    {
        if (count == pos)
            start = temp;
        temp = temp->next;
        count++;
    }
    temp->next = start;
}
bool detect(struct node *head)
{
    struct node *one = head;
    struct node *two = head;
    while (two != NULL && two->next != NULL)
    {
        one = one->next;
        two = two->next->next;
        if (one == two)
        {
            printf("cycle ");
            return true;
        }
    }
printf("Not cycle ");
    return false;
}
void remove1(struct node *head){
     struct node *one = head;
    struct node *two = head;

    while (two != NULL && two->next != NULL)
    {
        one = one->next;
        two = two->next->next;
        if (one == two)
        {
            one=head;
            break;
        }
    }
    while (one->next!=two->next)
    {
        one= one->next;
        two=two->next;
    }
    two->next=NULL;
    
}
int main()
{
    struct node *head = NULL;
    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    insertAtTail(&head, 5);
    insertAtTail(&head, 6);

    makecycle(&head,2);
    printf("%d\n", detect(head));
    remove1(head);
    printf("%d\n", detect(head));
    display(head);
}