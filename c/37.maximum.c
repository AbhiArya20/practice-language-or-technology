#include <stdio.h>
int main()
{
    int a, b, c, d;
    int max = -234234;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a >= max)
        max = a;
    if (b >= max)
        max = b;
    if (c >= max)
        max = c;
    if (d >= max)
        max = d;
    printf("%d", max);
}