#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> visited(100, 0);
int main()
{

    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    visited[1] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";   
        vector<int>::iterator it;
        for (it = adj[node].begin(); it != adj[node].end(); it++)
        {
            if (!visited[*it])
            {
                q.push(*it);
                visited[*it] = 1;
            }
        }
    }
}