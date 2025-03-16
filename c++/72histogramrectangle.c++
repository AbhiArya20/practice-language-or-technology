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
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            int height = arr[st.top()];
            st.pop();

            if (st.empty())
                ans = max(ans, i * height);
            else
            {
                int lenght = i - st.top() - 1;
                ans = max(ans, height * lenght);
            }
        }
        st.push(i);
        i++;
    }
    cout << ans;
}