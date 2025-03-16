#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void insertionSort(int *arr, int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        int key = arr[i];
        int j=i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1]=arr[j];   // 2 3 5 1 3 5
            j--;
        }
        j++;
        arr[j]=key;
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
    insertionSort(arr, n);
    display(arr, n);
}