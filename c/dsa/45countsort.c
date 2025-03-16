#include <stdio.h>
void countsort(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    
    int temp[100] = {0};

    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }
    for (int i = 1; i <= max; i++)
    {
        temp[i] += temp[i - 1];
    }
    int ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--temp[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
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
    countsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}