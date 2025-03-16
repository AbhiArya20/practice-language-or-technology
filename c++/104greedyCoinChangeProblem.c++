#include <bits/stdc++.h>
using namespace std;
vector<int> greedyfunc(vector<int> arr, int X)
{
    vector<int> ans;
    int n = arr.size() - 1;
    int count = 0;
    while (X > 0)
    {
        if (X < arr[n])
            n--;

        if (X >= arr[n])
        {
            if (X - arr[n] >= 0)
            {
                ans.push_back(arr[n]);
                X -= arr[n];
                count++;
            }
        }
    }
    cout << count << endl;
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int X;
    cin >> X;
    vector<int> ans = greedyfunc(arr, X);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    int answer = 0;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        answer = answer + (X / arr[i]);
        X = X - (X / arr[i] * arr[i]);
    }
    cout << answer;
}
