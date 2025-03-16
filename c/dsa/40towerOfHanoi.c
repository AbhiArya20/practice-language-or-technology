#include <string.h>
#include <stdio.h>
void toh(int n, char s, char h, char d)
{
    if (n == 0)
        return;
    toh(n - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    toh(n - 1, h, s, d);
}
int main()
{
    toh(3, 'A', 'B', 'C');
}