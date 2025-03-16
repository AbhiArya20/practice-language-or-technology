// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        if(arr[0]==0)
        return -1;
        if (n <= 1)
            return 0;
        int ans = 1, reach = arr[0], step = arr[0];
        for (int i = 1; i < n; i++)
        {
            if(i>=n-1)
            return ans;

            reach = max(reach, i + arr[i]);
            step--;
            if (step == 0)
            {
                ans++;
                if (i >= reach)
                    return -1;
                step = reach-i;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends