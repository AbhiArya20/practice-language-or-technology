#include<stdio.h>
int main()
{
    int a, i = 0;
    printf("type a number\n");
    scanf("%d", &a);
    do
    {
        printf("%d\n", i);
        i = i + 1;

    } while (i < a);
   
}

// while(1) for infinite loop