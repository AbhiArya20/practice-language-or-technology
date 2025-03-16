// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long p, long long q, long long r)
    {

        long long n1 = q - p + 1;
        long long n2 = r - q + 1;

        long long L[n1 + 1];
        long long R[n2 + 1];

        for (int i = 0; i < n1; i++)
        {
            L[i] = arr[p + i];
        }
        for (int i = 0; i < n2; i++)
        {
            R[i] = arr[q + i + 1];
        }
        L[n1] = INT_MAX;
        R[n2] = INT_MAX;
        int i = 0;
        int j = 0;
        long long int ans = 0;
        for (int k = p; k < r; k++)
        {
            if (L[i] < R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                ans += (n1 - i);
                j++;
            }
        }
        return ans;
    }
    long long int mergeSort(long long arr[], long long p, long long r)
    {
        long long int ans = 0;
        if (p < r)
        {
            long long q = (p + q) / 2;
            ans += mergeSort(arr, p, q);
            ans += mergeSort(arr, q + 1, r);
            ans += merge(arr, p, q, r);
        }
        return ans;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long int ans = mergeSort(arr, 0, N - 1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}
// } Driver Code Ends