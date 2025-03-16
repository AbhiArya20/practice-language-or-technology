#include <stdio.h>
int binarySeach(int arr[], int n, int key)
{
    int i = 0, u = n - 1;
    while (i <= u)
    {
        int mid = (i + u) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            u = mid - 1;
        if (arr[mid] < key)
            i = mid + 1;
    }
    return -1;
}
int main()
{
    int n, key;
    scanf("%d%d", &n, &key);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d",binarySeach(arr, n, key));
}