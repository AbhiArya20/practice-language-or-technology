#include <stdio.h>
int main()
{
    int num, i = 10;
    scanf("%d", &num);
    while (i >= 1)
    {
        printf("%d X %d\n", num, i);
        i--;
    }
}
