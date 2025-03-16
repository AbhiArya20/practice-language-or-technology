#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> visited(100);
int main()
{
    int v, e;
    cin >> v >> e;
    map<int, int> inDeg;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        inDeg[y]++;
    }
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (inDeg[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
       
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (auto it : adj[x])
        {
            inDeg[it]--;
            if (inDeg[it] == 0)
                q.push(it);
        }
    } 
}