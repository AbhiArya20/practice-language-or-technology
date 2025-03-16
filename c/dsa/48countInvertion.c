//012 sort
#include <stdio.h>
int brute(int arr[],int n){

 int count=0;                          
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]>arr[j])
            count++;
        }
        
     }return count;
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

    
    printf("%d",brute(arr, n));
}
