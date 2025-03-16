#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class stack
{

    node *top;

    stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        return (top == NULL);
    }
    void insertAthead(int val)
    {
        node *newNode = new node(val);
        newNode->next = top;
        top = newNode;
    }
    void push(int val)
    {
        node *newNode = new node(val);
        if (top == NULL)
        {
            insertAthead(val);
            return;
        }
        top->next = newNode;
        top = newNode;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "underflow";
            return;
        }
        node *temp = top;
        top = top->next;
        temp->next=top;
        
    }
};
