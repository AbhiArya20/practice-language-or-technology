#include <stdio.h>
#include "47linkedList.c" //use of fuction in this file to avoid writting again and again.
void change(struct node **head)
{
    struct node *odd = *head;
    struct node *even = odd->next;
    struct node *start = even;

    while (even != NULL && odd->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = start;
    if (odd->next == NULL)
        even->next = NULL;
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
    display(head);
    change(&head);
    printf("\n");
    display(head);
}