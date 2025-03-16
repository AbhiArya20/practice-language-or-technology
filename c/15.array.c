#include <stdio.h>
int array1d()
{
    int i = 3;
    int a[i];
    for (i = 0; i <= 2; i++)
    {
        printf("enter vector array of %d\n", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 2; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}
int array2d()
{
    int b[3][3];
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("enter 2D array of %d%d\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("lets input 1D array and print them\n");
    array1d();
    printf("lets input 2D array and print them\n");
    array2d();
}

//multi dimensional arrays allowed and stored in continuous memory block.