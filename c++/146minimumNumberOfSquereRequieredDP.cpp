#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 1;
vector<int> v(N, INT_MAX);
vector<int> vt(N, INT_MAX);
// memorization
int sqMin(int n)
{
    if (n <= 3)
        return n;
    if (v[n] != INT_MAX)
        return v[n];

    for (int i = 1; i * i <= n; i++)
    {
        v[n] = min(v[n], 1 + sqMin(n - i * i));
    }

    return v[n];
}

// tabulation
int sqMin1(int n)
{
    vt[0] = 0;
    vt[1] = 1;
    vt[2] = 2;
    vt[3] = 3;

    for (int i = 1; i * i <= n; i++)
    {
        for (int j = 0; i * i+j <= n; j++)
        {
            vt[i*i+j]= min(vt[i*i+j], 1+ vt[j]);
        }
    }

    return v[n];
}
int main()
{
    int n;
    cin >> n;

    cout << sqMin(n)<<endl;
    cout << sqMin1(n)<<endl;
}