#include <bits/stdc++.h>
using namespace std;

int main()
{

    int vertex, edge;
    cin >> vertex >> edge;
    vector<vector<int>> adj(vertex + 1, vector<int>(vertex + 1, 0));
    for (int i = 0; i < edge; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    cout << "adj matrix"<<endl;
    for (int i = 1; i < vertex + 1; i++)
    {
        for (int j = 1; j < vertex + 1; j++)
        {
            cout << adj[i][j] <<" ";
        }
        cout << endl;
    }
}