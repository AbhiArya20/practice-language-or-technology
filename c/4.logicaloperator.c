#include<stdio.h>
int main()
{
    int a,b;
    a=6;
    b=0;
    printf(" a&&b = %d\n", a&&b);
    printf(" a||b = %d\n", a||b);
    printf(" !a&&b = %d\n", !(a||b));
    printf(" !a||b = %d\n", !(a&&b));
}