#include <stdio.h>
int main()
{
    int a = 0, s;
    printf("enter a number\n");
    scanf("%d", &s);
    while (a < s)
    {
        printf("%d\n", a);
        a++;
    }
}