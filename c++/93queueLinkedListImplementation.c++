#include <iostream>
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

class queue
{
    Node *front;
    Node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (front == NULL)
        {
            front = newNode;
            back = newNode;
            return;
        }
        back->next = newNode;
        back = newNode;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "underFlow";
            return;
        }
        Node *todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "underFlow";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};