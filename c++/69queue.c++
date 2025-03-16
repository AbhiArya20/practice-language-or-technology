#include <iostream>
using namespace std;
#define n 100
class queue
{
private:
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    bool isFull()
    {
        return (back = n - 1);
    }
    bool isEmpty()
    {
        return (front == -1 || front > back);
    }
    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "full";
            return;
        }
        back++;
        arr[back] = x;
        if (front = -1)
            front++;
    }
    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "empty";
            return;
        }
        front++;
    }
    int peak()
    {
        if (front == -1 || front > back)
        {
            cout << "empty";
        }
        return arr[front];
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
}