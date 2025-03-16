#include<stdio.h>
int main(){
    int n,till,i=1,sum=0;
    scanf("%d%d",&n,&till);

    while (sum<=till)
    {
        sum+=n;
        n*=i;
        i++;
    }
    printf("%d",sum);
}