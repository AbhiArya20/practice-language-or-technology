#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push(temp);
    }
    int ans = 0;
    while (arr.size() > 1)
    {
        int one = arr.top();
        arr.pop();
        int two = arr.top();
        arr.pop();
        int sum = one + two;
        arr.push(sum);
        ans += sum;
    }
    cout << ans;
}