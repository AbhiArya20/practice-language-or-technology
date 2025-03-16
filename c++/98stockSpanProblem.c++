#include <bits/stdc++.h>
using namespace std;
vector<int> stockSpan(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    stack<pair<int, int>> st;
    int i = 0;
    while (i < n)
    {
        int counter = 1;
        while (!st.empty() && st.top().first <= arr[i])
        {
            counter += st.top().second;
            st.pop();
        }
        st.push({arr[i], counter});
        ans.push_back(counter);
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    vector<int> ans = stockSpan(arr);

    for (auto i : ans)
    {
        cout << i << " ";
    }
}