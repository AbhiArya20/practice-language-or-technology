#include <stdio.h>
int find(int arr[], int n, int s) //O(n*n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == s)
            {
                printf("%d %d", i + 1, j + 1);
                return 0;
            }
        }
    }
    return -1;
}

int findByTwoPoiner(int arr[], int n, int s) //O(n)
{
    int sum = 0, i = 0, j = 0, st = -1, ed = -1;

    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }
    if (sum == s)
    {
        printf("%d %d", i + 1, j);
        return 0;
    }

    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {

            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            ed = j + 1;
            break;
        }
        j++;
    }
    printf("%d %d", st, ed);
}
int main()
{
    int n, s;
    scanf("%d%d", &n, &s);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    findByTwoPoiner(arr, n, s);
}