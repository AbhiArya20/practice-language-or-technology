#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    priority_queue<int, vector<int>> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pq.push(arr[i]);
    }
    int k;
    cin >> k;
    int sum = 0;
    int counter = 0 ;
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        counter++;
        if (sum > k)
        {
            break;
        }
    }
    cout << counter << " ";
}