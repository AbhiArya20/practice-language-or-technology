#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }
    int i = 0;
    int ans = 0;
    stack<int> st;
    arr.push_back(0);
    while (i < n)
    {
        while (!st.empty() && arr[st.top()] < arr[i])
        {
            int cur = st.top();
            st.pop();

            if (st.empty())
                break;
            else
            {
                int lenght = i - st.top() - 1;
                ans += (min(arr[st.top()], arr[st.top()] - arr[cur]))*lenght;
            }
        }
        st.push(i);
        i++;
    }
    cout << ans;
}