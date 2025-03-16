#include <stdio.h>
#include<stdbool.h>
bool isPower(int n)
{
    return (n && (n & (n - 1)));
}
int main()
{
    int n;
    scanf("%d", &n);
    if (isPower(n) == 0)
        printf("YES");
    else
        printf("NO");
}