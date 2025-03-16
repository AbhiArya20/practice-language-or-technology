// #include <bits/stdc++.h>
#include <C:\This is me\Programing\My Work\DSA C++/85linkedList.c++>
using namespace std;
Node *merge(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *toreturn = NULL;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            insertAtEnd(toreturn, temp1->data);
            temp1 = temp1->next;
        }
        else
        {
            insertAtEnd(toreturn, temp2->data);
            temp2 = temp2->next;
        }
    }
    if (temp1 != NULL)
    {
        while (temp1 != NULL)
        {
            insertAtEnd(toreturn, temp1->data);
            temp1 = temp1->next;
        }
    }
    else if (temp2 != NULL)
    {
        while (temp2 != NULL)
        {
            insertAtEnd(toreturn, temp2->data);
            temp2 = temp2->next;
        }
    }

    return toreturn;
}
Node *mergerec(Node *head1, Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    Node *result;

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergerec(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergerec(head1, head2->next);
    }
    return result;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    insertAthead(head1, 1);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 5);
    insertAtEnd(head1, 7);
    insertAtEnd(head1, 9);
    display(head1);
    cout << endl;
    insertAtEnd(head2, 2);
    insertAtEnd(head2, 4);
    insertAtEnd(head2, 6);
    insertAtEnd(head2, 8);
    display(head2);
    cout << endl;
    Node *merged = mergerec(head1, head2);
    display(merged);
}