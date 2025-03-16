#include <stdio.h>
int repeat(int arr[], int n)
{
    int ans[n];
    int min = __INT_MAX__;

    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }
    for (int j = 0; j < n; j++)
    {
        if (ans[arr[j]] != -1)
        {
            if (min > ans[arr[j]])
                min = ans[arr[j]];
        }
        else
        {
            ans[arr[j]] = j;
        }
    } 
   if(min==__INT_MAX__)
   return -1;
   else
   return min;
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
    printf("%d", repeat(arr, n));
}