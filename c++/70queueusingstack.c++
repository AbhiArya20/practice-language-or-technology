#include <bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int val)
    {
        s1.push(val);
    }
    void dequeue()
    {
        if (s1.empty() and s2.empty())
        {
            cout << "empty";
            return;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop();
            return;
        }
    }
    bool isEmpty()
    {
        return (s1.empty() && s2.empty());
    }
    int peak()
    {
        if (s1.empty() and s2.empty())
        {
            cout << "empty";
            return -1;
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
};

int main()
{
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    cout<<q1.peak();
    
}
