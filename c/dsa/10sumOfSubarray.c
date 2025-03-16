#include <stdio.h>
void sumOfSubarray(int arr[], int n)
{
    

    for (int i = 0; i < n; i++)
    {int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            printf("%d ", sum);
        }
        printf("\n");
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
    sumOfSubarray(arr, n);
}