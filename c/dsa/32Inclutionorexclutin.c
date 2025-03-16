#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int d5 = 0, d7 = 0, d57 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 5 == 0)
            d5++;

        if (i % 7 == 0)
            d7++;

        if (i % 5 == 0 && i % 7 == 0)
            d57++;
    }
    int divisibleby5or7 = (d5 + d7) - d57;
    printf("%d",divisibleby5or7);
}