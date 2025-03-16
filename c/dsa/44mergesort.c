#include <string.h>
#include <stdio.h>
void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1; 
    int n2 = r - q;
    int L[n1 + 1];
    int R[n2 + 1];
    for (int i = 1; i <= n1; i++)
    {
        L[i] = arr[p + i-1];
    }
    for (int j = 1; j <= n2; j++)
    {
        R[j] = arr[q + j];
    }
    L[n1 + 1] = __INT_MAX__;
    R[n2 + 1] = __INT_MAX__;

    int i = 1;
    int j = 1;
    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
    }
}
void mergesort(int arr[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(arr, p, q);
        mergesort(arr, q + 1, r);
        merge(arr, p, q, r);
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
    mergesort(arr, 1, n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}