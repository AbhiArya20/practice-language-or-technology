#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> pqmax;
priority_queue<int, vector<int>, greater<int>> pqmin;
void insert(int i)
{

    if (pqmax.size() == pqmin.size())
    {
        if (pqmax.empty())
        {
            pqmax.push(i);
            return;
        }
        if (i < pqmax.top())
        {
            pqmax.push(i);
            return;
        }
        pqmin.push(i);
        return;
    }
    if (pqmax.size() > pqmin.size())
    {
        if (i >= pqmax.top())
            pqmin.push(i);
        else
        {
            int temp = pqmax.top();
            pqmax.pop();
            pqmax.push(i);
            pqmin.push(temp);
        }
        return;
    }
    if (i >= pqmin.top())
        pqmax.push(i);
    else
    {
        int temp = pqmin.top();
        pqmin.pop();
        pqmin.push(i);
        pqmax.push(temp);
    };
    return;
}

float findmedian()
{
    if (pqmax.size() == pqmin.size())
        return (pqmax.top() + pqmin.top()) / 2.0;

    if (pqmax.size() > pqmin.size())
        return (pqmax.top());
    else
        return (pqmin.top());
}
int main()
{
    vector<int> arr(5);
    for (auto &i : arr)
    {
        cin >> i;
        insert(i);
        cout << findmedian() << endl;
    }
}
