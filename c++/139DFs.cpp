#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> visited(100, 0);
void dfs(int node)
{

    visited[node] = 1;
    cout << node << " ";
    vector<int> ::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
            dfs(*it);
    }
}
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

    dfs(1);
}