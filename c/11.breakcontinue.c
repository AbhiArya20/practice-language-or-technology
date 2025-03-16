#include<stdio.h>
int main()
{
    int a;
    printf("enter no \n");
    scanf("%d", &a);
    for(int s=1; s<11; s++)
    {
        if (s==9)
        {
            break;
        }
        if (s==2)
        {
            continue;
        }
        printf("%d\n", a*s);
        
    }
}