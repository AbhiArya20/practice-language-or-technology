#include <stdio.h>
int  record(int arr[], int n)
{
    if (n == 1)
        return 1;
    else
    {
        int count = 0;
        int preMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > preMax && arr[i + 1] < arr[i])
            {
                count++;
                preMax = arr[i];
            }
        }
        return count;
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
    printf("%d", record(arr, n));
}