#include <iostream>
using namespace std;
#define n 100
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
class queue
{
private:
    node *front;
    node *back;

public:
    queue()
    {

        front = NULL;
        back = NULL;
    }
    bool isEmpty()
    {
        return (front == NULL);
    }
    void enqueue(int x)
    {
        node *newNode = new node(x);
        if (back == NULL)
        {
            back = newNode;
            front = newNode;
        }
        back->next=newNode;
        back= newNode;
    }
    void dequeue()
    {
        if (front==NULL)
        {
            cout << "empty";
            return;
        }
       front=front->next;
    }
    int peak()
    {
        if (front ==NULL)
       {
           cout<<"empty";
           return -1;
       }
       return front->data;
    }
};

int main()
{
    queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(6);
    cout << q1.peak();
    q1.dequeue();
    cout << q1.peak();
    q1.dequeue();
    cout << q1.peak();
    q1.dequeue();
    cout << q1.peak();
    q1.dequeue();
    cout << q1.peak();
    q1.dequeue();
    cout << q1.peak();
    q1.dequeue();
    cout << q1.peak();
}