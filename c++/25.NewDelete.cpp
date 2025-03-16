#include <stdio.h>
int main()
{
    int a = 5;
    int *pointer = &a;
    int *ptr = new int(5);
    printf("the value of a is %d\n", *pointer);

    //array pointer
    
    int *array = new int[4];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    printf("the value of a is %d\n", array[0]);
    printf("the value of a is %d\n", array[1]);
    printf("the value of a is %d\n", array[2]);
    printf("the value of a is %d\n", array[3]);

delete[] array;

    printf("the value of a is %d\n", array[0]);
    printf("the value of a is %d\n", array[1]);
    printf("the value of a is %d\n", array[2]);
    printf("the value of a is %d\n", array[3]);
}