#include <stdio.h>
int sum(int a, int b)
{
    a = 5;
    b = 5;
   int j=a+b;
    return j;
}
int main()
{
    int c = 4, b = 5;
    printf("%d %d\n", c, b);
    printf("%d\n", sum(c, b));
    printf("%d %d\n", c, b);
}