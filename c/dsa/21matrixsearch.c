#include <stdio.h>
int main()
{
    int n1, key;
    scanf("%d%d", &n1, &key);
    int m1[n1][n1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    int i = 0, j = n1 - 1;
    while (i < n1 || j > 0)
    {
        if (m1[i][j] == key)
        {
            printf("%d %d", i, j);
            return 0;
        }
        if (key > m1[i][j])
        {
            i++;
        }

        if (key < m1[i][j])
        {
            j--;
        }
    }
        printf("not found");
}