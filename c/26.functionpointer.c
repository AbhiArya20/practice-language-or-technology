#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void EE(int(*ptr2)(int,int))

{
    printf("hey\n");
    printf("EE sum %d  \n",ptr2(5,6));
}
void EE1(int(*ptr2)(int,int))

{
    printf("hii\n");
    printf("EE sum %d  ",ptr2(5,6));
}

int main()
{
    printf("sum: %d\n", sum(1, 3));
    int (*ptr)(int, int);
    ptr = &sum;
    int d = (*ptr)(1 ,4);
    printf("sum: %d\n", d);
    EE(ptr);
    EE1(ptr);
}