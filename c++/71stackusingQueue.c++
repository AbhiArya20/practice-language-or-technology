#include <bits/stdc++.h>
using namespace std;
class Stack
{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:

    Stack()
    {
        n = 0;
    }
    void push(int val)
    {
        q2.push(val);
        n++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }
    void pop()
    {
        q1.pop();
        n--;
    }
    int top(){
return q1.front();
    }

    int size()
    {
        return n; 
    }
};
int main(){
    Stack s1;
    s1.push(6);
    s1.push(5);
    s1.push(4);
    s1.push(3);
    s1.push(2);
cout<<s1.top();
    cout<<s1.size();
}