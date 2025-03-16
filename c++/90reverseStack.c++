#include <bits/stdc++.h>
using namespace std;
void placeBottom(stack<int> &s, int ele)
{
    if (s.empty())
    {
        s.push(ele);
        return;
    }
    int toHold = s.top();
    s.pop();

    placeBottom(s, ele);
    s.push(toHold);
}
void reverseStack(stack<int> &s)
{
    if (s.empty())
        return;

    int ele = s.top();
    s.pop();
    reverseStack(s);
    placeBottom(s, ele);
}
int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // reverseStack(s);

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}