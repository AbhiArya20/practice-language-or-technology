#include <bits/stdc++.h>
using namespace std;

// Given an array print maximum of sum of all possiblle subArrays

int bruteForce(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            ans = max(ans, sum);
        }
    }
    return ans;
}

int kadaneAproach(int arr[], int n)
{
    int sum = 0;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        ans = max(ans, sum);
    }
    return ans;
}

int kadaneAproachForCircular(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        arr[i] = -arr[i];
    }
    int strainght = kadaneAproach(arr, n);
    return sum + strainght;
}
int cumlativeAproach(int arr[], int n)
{
    int ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        arr[i] = arr[i] + arr[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        int check = arr[n - 1] - arr[i];
        ans = max(ans, check);
    }
    ans = max(ans, arr[0]);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << kadaneAproach(arr, n) << endl;
    cout << kadaneAproachForCircular(arr, n) << endl;
    // cout << bruteForce(arr, n) << endl;
    // cout << cumlativeAproach(arr, n) << endl;
}