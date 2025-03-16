#include <stdio.h>
#include <stdbool.h>
bool check(int arr[], int n)
{
  if (n == 1)
    return true;
  bool rest = check(arr + 1, n - 1);
  return ((arr[1] > arr[0] && rest));
}
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("%d", check(arr, n));
}