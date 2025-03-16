#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (arr[j] == j)
                    arr[j] = i;
            }
        }
    }
   while (n!=1)
   {
       printf("%d ",arr[n]);
       n=n/arr[n];
   }
   
}