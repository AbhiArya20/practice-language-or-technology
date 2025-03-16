#include <stdio.h>

int main()
{
    int n, mini = __INT_MAX__, maxi = -__INT_MAX__;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
            maxi = arr[i];
        if (arr[i] < mini)
            mini = arr[i];
    }
    printf("%d %d", maxi, mini);
}
