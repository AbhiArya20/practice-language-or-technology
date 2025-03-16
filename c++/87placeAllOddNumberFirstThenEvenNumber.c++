#include <C:\This is me\Programing\My Work\DSA C++/85linkedList.c++>
void oddEven(Node *&head)
{
    Node *odd = head;
    Node *even = head->next;
    Node *start = even;
    while ((odd->next != NULL && even->next != NULL))
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
    Node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    oddEven(head);
    display(head);
}