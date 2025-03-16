#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    bool check[max];
    for (int i = 0; i < max; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            check[arr[i]] = true;
    }
    for (int i = 0; i < max; i++)
    {
        if (check[i] == false)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("Not found");
}