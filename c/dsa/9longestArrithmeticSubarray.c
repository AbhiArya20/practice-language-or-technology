#include <stdio.h>
int Longest(int arr[], int n)
{
    int prediff = arr[1] - arr[2];
    int count = 2;
    int ans = 1;
    for (int i = 0; i < n - 1; i++)
    {

        if ((arr[i] - arr[i + 1]) == prediff)
        {
            count++;
        }
        else
        {
            prediff = arr[i] - arr[i + 1];
            ans = count;
            count = 2;
        }
    }
    if (ans > count)
    {
        return ans;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", Longest(arr, n));
}