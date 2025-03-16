#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAthead(Node *&head, int val);
void insertAtEnd(Node *&head, int val)
{
    if (head == NULL)
    {
        insertAthead(head, val);
        return;
    }
    Node *temp = head;
    Node *newNode = new Node(val);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insertAthead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    return;
}
void insert(Node *&head, int val, int pos)
{
    if (pos == 1)
    {
        insertAthead(head, val);
        return;
    }

    Node *temp = head;
    Node *newNode = new Node(val);
    while (--pos)
    {
        temp = temp->next;
    }
    if (temp->next != NULL)
        newNode->next = temp->next;
    temp->next = newNode;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
int search(Node *head, int key)
{
    Node *temp = head;
    int count = -1;
    while (temp != NULL)
    {
        count++;
        if (temp->data == key)
        {
            return count;
        }
        temp = temp->next;
    }
    return count;
}
void deleteAthead(Node *&head, int val)
{
    Node *temp = head;
    head = head->next;
    delete temp;
    return;
}
void remove(Node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL && val == head->data)
    {
        deleteAthead(head, val);
    }
    if (val == head->data)
    {
        deleteAthead(head, val);
        return;
    }
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todel = temp->next;
    temp->next = temp->next->next;
    delete todel;
}
Node *recrev(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = recrev(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}
Node *recrevK(Node *head, int k)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL;
    Node *cur = head;
    Node *nextptr;
    int count = 0;
    while (cur != NULL && count < k)
    {
        nextptr = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        Node *temp = recrevK(nextptr, k);
        head->next = temp;
    }
    return prev;
}
void reversed(Node *&head)
{
    Node *prev = NULL;
    Node *cur = head;
    Node *nextptr;

    while (cur != NULL)
    {
        nextptr = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextptr;
    }
    head = prev;
    return;
}
void makeCycle(Node *&head, int pos)
{
    Node *temp = head;
    Node *whereCycle;
    int counter = 1;
    while (temp->next != NULL)
    {
        if (counter == pos)
        {
            whereCycle = temp;
        }
        temp = temp->next;
        counter++;
    }
    temp->next = whereCycle;
}
bool detectCycle(Node *&head)
{
    Node *fast = head;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return true;
    }
    return false;
}
void removeCycle(Node *&head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL || fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            break;
        }
    }

    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}
// append last k node to the start of linked list
void appendK(Node *&head, int k)
{
    Node *temp = head;
    Node *toAppend = head;
    Node *toNehead;
    int counter = 0;
    while (temp->next != NULL)
    {
        counter++;
        if (counter == k)
        {
            toNehead = temp->next;
            temp->next = NULL;
            break;
        }
        temp = temp->next;
    }

    Node *temp2 = toNehead;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = toAppend;
    head = toNehead;
}

int length(Node *head)
{
    Node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
void minter(Node *&head, Node *&head2, int l1, int l2, int pos)
{
    Node *temp1 = head;
    Node *temp2 = head2;
    int counter = 0;
    while (temp1->next != NULL)
    {
        counter++;
        temp1 = temp1->next;
        if (counter == pos)
            break;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}
void makeIntersection(Node *&head, Node *&head2, int pos)
{
    int headLen = length(head);
    int head2Len = length(head2);

    if (headLen > head2Len)
        minter(head, head2, headLen, head2Len, pos);
    else
        minter(head2, head, head2Len, headLen, pos);
}

int intersec(Node *head, Node *head2, int l1, int l2)
{
    int k = l1 - l2;
    Node *temp1 = head;
    Node *temp2 = head2;
    int counter = 0;
    while (temp1->next != NULL && counter < k)
    {
        counter++;
        temp1 = temp1->next;
    }

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->next == temp2->next)
            return temp1->data;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}
int findIntersection(Node *head, Node *head2)
{
    int headLen = length(head);
    int head2Len = length(head2);

    if (headLen > head2Len)
    {
        return intersec(head, head2, headLen, head2Len);
    }
    else
        return intersec(head2, head, head2Len, headLen);

    return -1;
}
// int main()
// {
//     Node *head2 = NULL;
//     Node *head = NULL;
//     insertAtEnd(head, 1);
//     insertAtEnd(head, 2);
//     insertAtEnd(head, 3);
//     insertAtEnd(head, 4);
//     insertAtEnd(head, 5);
//     insertAtEnd(head, 6);


//     insertAtEnd(head2, 9);
//     insertAtEnd(head2, 10);


//     makeIntersection(head, head2, 4);
//     display(head);
//     cout << endl;
//     display(head2);
//     cout << endl;
//     cout << findIntersection(head, head2);
// }