#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    fflush(stdin);
    char arr[n + 1];
    gets(arr);
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            printf("No");
            return 0;
        }
        i++;
        j--;
    }
    printf("Yes");
}