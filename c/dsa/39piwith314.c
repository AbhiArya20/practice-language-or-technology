#include <stdio.h>
#include <string.h>
void replace(char *str, int n)
{

    if (*(str + n) == '\0')
        return;
    if (*(str + n) == 'p' && *(str + n + 1) == 'i')
    {
        printf("%0.2f", 3.14);
        n=n+2;
        replace(str, n);
    }
    else
    {
        printf("%c", *(str + n));
        replace(str, ++n);
    }
}
int main()
{

    char str[100];
    gets(str);
    replace(str, 0);
}