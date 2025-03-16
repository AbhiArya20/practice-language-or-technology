#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int rs = 0, re = n-1 , cs = 0, ce = m-1;
    while (rs <= re || cs <= ce)
    {
        for (int i = cs; i <=ce; i++)
        {
            printf("%d ", arr[rs][i]);
        }
        rs++;
        for (int i = rs; i <= re; i++)
        {
            printf("%d ", arr[i][ce]);
        }
        ce--;
        for (int i = ce; i >= cs; i--)
        {
            printf("%d ", arr[re][i]);
        }
        re--;
        for (int i = re; i >= rs; i--)
        {
            printf("%d ", arr[i][cs]);
        }
        cs++;

    }
}