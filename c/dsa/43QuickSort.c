#include <stdio.h>
int partition(int arr[], int p, int r)
{
    int pivot = arr[r];
    int j = p - 1;
    for (int i = p; i < r; i++)
    {
        if (arr[i] <= pivot)
        {
            j++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[j + 1];
    arr[j + 1] = arr[r];
    arr[r] = temp;
    return j + 1;
}
void quicksort(int arr[], int p, int r)
{
    if (p < r)
    {
        int pivot = partition(arr, p, r);
        quicksort(arr, p, pivot - 1);
        quicksort(arr, pivot + 1, r);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 1, n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}