#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 96 && ch <= 122)
        printf("YES");
    else
        printf("NO");
}