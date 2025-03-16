#include <bits/stdc++.h>
using namespace std;
bool isCycle(int src, vector<vector<int>> adj, vector<int> &visited, vector<int> &stack)
{
    stack[src] = 1;
    if (!visited[src])
        visited[src] = 1;
    for (auto it : adj[src])
    {
        if (!visited[it] && isCycle(it, adj, visited, stack))
            return true;
        if (stack[it])
            return true;
    }
    stack[src] = 0;
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
    }
    bool cycle = false;
    vector<int> visited(v);
    vector<int> stack(v);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i] && isCycle(i, adj, visited, stack))
            cycle = true;
    }
    cout << cycle << " ";
}