#include <stdio.h>
#include <stdbool.h>
bool pairS(int arr[], int n, int k)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
                return true;
        }
    }
    return false;
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("%d",pairS(arr, n, k));
}