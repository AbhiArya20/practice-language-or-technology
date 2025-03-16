#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10000];
int main()
{
    int vertex, edge;
    cin >> vertex>>edge;
    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << " adj list" << endl;

    for (int i = 1; i < vertex + 1; i++)
    {
        cout << i << "->  ";
        vector<int>::iterator it;
        for (it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout << *it<<"->";
        }
        cout<<endl;
    }
}