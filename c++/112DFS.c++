#include <bits/stdc++.h>
using namespace std;

const int N = 10e5 + 2;
bool visited[N] = {false};
vector<int> adj[N];

void dfs(int node)
{

    visited[node] = true;
    cout << node << " "; //inorder
    for (int i: adj[node])
    {
       if(!visited[i])
       dfs(i);
    }
    //cout << node << " "; //postorder


}
int main()
{

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
}