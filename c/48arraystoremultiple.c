#include <stdio.h>
int function(int *ptr,int n){
for (int i = 0; i < n; i++)
{
    printf("%d\n",*(ptr+i));
}

}
int main()
{
  int n,k;
  scanf("%d%d",&n,&k);
  int arr[n];
  for(int i=0; i<n; i++)
  arr[i]=k*(i+1);
  function(arr,n);
}