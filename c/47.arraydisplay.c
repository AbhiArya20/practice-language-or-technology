#include <stdio.h>
int function(int *ptr,int n){
for (int i = 0; i < n; i++)
{
    printf("%d\n",*(ptr+i));
}

}
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++)
  scanf("%d",&arr[i]);
  function(arr,n);

}