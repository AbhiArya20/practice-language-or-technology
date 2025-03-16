#include <stdio.h>
int main()
{
    int a;

        printf("enter no \n");
    scanf("%d", &a);
    for (int s = 1; s < 11; s++)
    {
        printf("%d\n", a * s);
        if (s == 9)
        {
            goto end;
        }
        if (s == 5)
        {
            goto lebal;
        }
    }
lebal:
{
    printf("goto excuted");
}
end:
    return 0;
}
