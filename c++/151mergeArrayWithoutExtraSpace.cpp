// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution
{
public:
    void mer(int arr1[], int arr2[], int n, int m)
    {
        int j = 0, i = 0;
        int k = max(n, m);

        while (k >= 0)
        {
            if (arr1[i] > arr2[j] && n < m)
            {
                swap(arr1[i], arr2[j]);
                if (i < n - 1)
                    i++;
            }
            else if (j < m - 1)
                j++;

            k--;
        }

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
    void merge(int arr1[], int arr2[], int n, int m)
    {
        if (n < m)
            mer(arr1, arr2, n, m);
        else
        {
            // swap(arr1, arr2);
            mer(arr2, arr1, m, n);
            swap(arr2, arr1);
        }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends