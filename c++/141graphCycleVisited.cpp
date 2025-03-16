#include <bits/stdc++.h>
using namespace std;
bool isCycle(int src, vector<vector<int>> adj, vector<int> &visited, int parent)
{
    visited[src] = 1;
    for (auto it : adj[src])
    {
        if (it != parent)
        {
            if (visited[it])
                return true;
            if (!visited[it] && isCycle(it, adj, visited, src))
                return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> adj(1000);
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool cycle = false;
    vector<int> visited(1000);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i] && isCycle(i, adj, visited, -1))
            cycle = true;
    }
    cout << cycle << " ";
}