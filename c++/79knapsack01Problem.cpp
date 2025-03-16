#include <bits/stdc++.h>
using namespace std;
int knapsack(int W, int value[], int weight[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (weight[n - 1] > W)
        return knapsack(W, value, weight, n - 1);

    return max((knapsack(W - weight[n - 1], value, weight, n - 1) + value[n - 1]), knapsack(W, value, weight, n - 1));
}
int main()
{
    int W;
    cin >> W;

    int n;
    cin >> n;

    int value[n];
    int weight[n];

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
        cin >> weight[i];
    }

    cout << knapsack(W, value, weight, n);
}