#include <stdio.h>
int find(int arr[], int n, int key, int i)
{
    if (i == n)
        return -1;
    if (arr[i] == key)
        return i;

    return find(arr, n, key, i + 1);
}
int find2(int arr[], int n, int key, int i)
{
    if (i == n)
        return -1;
    int temp = find2(arr, n, key, i + 1);
    if (temp != -1)
        return temp;
    if (arr[i] == key)
        return i;
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

    printf("%d ", find(arr, n, key, 0));
    printf("%d", find2(arr, n, key, 0));
}