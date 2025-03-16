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

class stack
{
    Node *head;
    Node *top;

public:
    stack()
    {
        top = NULL;
        head = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (top == NULL)
        {
            head = newNode;
            top = newNode;
            return;
        }
        top->next = newNode;
        top = newNode;
    }
    void pop()
    {
        if (top == NULL)
        {
            cout << "overFlow";
            return;
        }
        Node* temp=head;
        while (temp->next != top)
        {
            temp=temp->next;
        }
        Node* tode= temp->next;
        top=temp;
        top->next=NULL;
        delete tode;
    }
    int Top()
    {
        if (top == NULL)
        {
            cout << "overFlow";
            return -1;
        }
        return top->data;
    }
    bool isEmpty()
    {
        if (top == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    st.pop();
    cout << st.Top();
}