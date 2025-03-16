#include<stdio.h>
int main(){
    int n,fact=1;
    scanf("%d",&n);

    for(int i=n; i; i--)
    {
    fact*=i;
    }
    printf("%d",fact);
}