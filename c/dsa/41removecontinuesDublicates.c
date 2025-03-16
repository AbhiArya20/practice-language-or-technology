#include <stdio.h>
#include <string.h>
void removeD(char *str, int s, int e)
{
    if (s >= e)
        return;
    printf("%c", *(str + s));
    while (*(str + s) == *(str + (s + 1)))
    {
        s++;
    }
    s++;
   
    removeD(str, s, e);
}
int main()
{
    char str[100];
    gets(str);
    removeD(str, 0, strlen(str) - 1);
}