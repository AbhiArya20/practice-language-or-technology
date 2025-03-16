#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 2; i <=n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
            printf("%d ", i);
    }
}