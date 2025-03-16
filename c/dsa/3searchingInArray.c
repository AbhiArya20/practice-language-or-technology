#include <stdio.h>
int main()
{
    int n, key;
    scanf("%d%d", &n, &key);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d at %d", arr[i], i);
            return 0;
        }
    }
}
