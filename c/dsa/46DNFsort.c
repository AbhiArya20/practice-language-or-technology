//012 sort
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 0, j = n - 1, mid = 0;
    while(mid<=j)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[mid];
            arr[mid] = arr[i];
            arr[i] = temp;
            i++;
            mid++;
        }
       else if (arr[mid] == 1)
        {                                
            mid++; 
        }
       else if (arr[mid] == 2)
        {
            int temp= arr[mid];
            arr[mid]=arr[j];
            arr[j]=temp;
            j--;
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}