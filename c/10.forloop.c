#include <stdio.h>
int main()
{
    int a, i, j;
    printf("enter a number\n");
    scanf("%d", &a);
    for (i = 0, j = 1; i < 10, j < 5; i++)
    {
        printf("%d%d%d\n", a, i, j);
        j++;
    }
}