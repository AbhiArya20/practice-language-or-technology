#include <stdio.h>
void maxTillK(int arr[], int n)
{
    int maxi =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        maxi=arr[i];
    printf("%d ",maxi);
    }

}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maxTillK(arr, n);
}