#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj(100);
vector<int> visited(100);
vector<int> ans;

int getComp(int node)
{

    if (visited[node])
        return 0;
    visited[node] = 1;
    int c = 1;
    vector<int>::iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++)
    {
        if (!visited[*it])
        {
            c += getComp(*it);
            visited[*it] = 1;
        }
    }
    return c;
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
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
            ans.push_back(getComp(i));
    }
    int to = 0;
    for (int i = 1; i < ans.size(); i++)
    {
        to += ans[i] * (v - ans[i]);
    }
    cout << to;
}