#include <stdio.h>
int ex(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b-*b;
}
int main()
{
    int a = 6, b = 7;
    printf("the value of a is %d and b is %d\n", a, b);
    ex(&a, &b);
    printf("now the value of a is %d and b is %d\n", a, b);
}