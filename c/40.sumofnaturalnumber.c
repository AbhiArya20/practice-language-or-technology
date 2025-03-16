#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    n++;
    while (n--)
    {
        sum+=n;
    }
    printf("%d",sum);
}