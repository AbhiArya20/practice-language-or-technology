#include <stdio.h>
int setbit(int n, int pos)
{
    return (n | (1 << pos));
}
int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int uniq(int arr[], int n)
{
    int bit[64];
    int result = 0;
    for (int j = 0; j < 64; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (getbit(arr[i], j))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setbit(result, j);
        }
    }
    return result;
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
    printf("%d", uniq(arr, n));
}