#include <stdio.h>
void pattern(int n);
int main()
{
    int a;
    scanf("%d", &a);
    pattern(a);
}
void pattern(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
            printf("*");
        printf("\n");
    }
}
