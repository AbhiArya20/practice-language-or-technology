#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 2;
bool visited[N];
vector<int> adjlist[N];
int main()
{
    for (int i = 0; i < N; i++)
    {
        visited[i] = false;
    }
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << endl;

        vector<int>::iterator it;
        for (it = adjlist[node].begin(); it != adjlist[node].end(); it++)
        {
            if (!visited[*it])
                visited[*it] = 1;
            q.push(*it);
        }
    }
}