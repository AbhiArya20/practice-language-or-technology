#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    fflush(stdin);
    gets(arr);
    int count = 0;
    int max = 0;
    int i = 0;
    int start = 0, end = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {

            if (max < count)
            {
                max = count;
                end = start;
            }
            count = 0;
            start = i + 1;
        }
        else
            count++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    printf("%d\n", max);
    for (int i = 0; i < max; i++)
    {
        printf("%c", arr[i+end]);
    }
}