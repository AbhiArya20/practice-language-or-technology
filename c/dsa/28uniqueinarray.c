#include <stdio.h>

int getbitfunc(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int uniq(int arr[], int n)
{
    int xo = 0;
    for (int i = 0; i < n; i++)
    {
        xo = xo ^ arr[i];
    }

    return xo;
}
int twouniq(int arr[], int n)
{
    int xo = 0;
    for (int i = 0; i < n; i++)
    {
        xo = xo ^ arr[i];
    }
    int two = xo;
    int getbit = 0;
    int pos = 0;
    while (getbit != 1)
    {
        getbit = xo & 1;
        pos++;
        xo = xo >> 1;
    }
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (getbitfunc(arr[i], pos - 1))
        {
            one = one ^ arr[i];
        }
    }
    two = one ^ two;
    printf("%d %d", one, two);
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
    // printf("%d", uniq(arr, n));
    twouniq(arr, n);
}