#include <stdio.h>
int main()
{
    int a;
    int i = 2;
    scanf("%d", &a);
    while (i < a)
    {
        if (a % i == 0)
        {
            printf("NO");
            return 0;
        }
        i++;
    }
    printf("YES");
    return 0;
}