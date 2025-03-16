#include<stdio.h>

int func(int arr[])//array as parameter directly
{
    for (int i = 0; i <= 4; i++)
    {
        printf("the value at %d is %d\n", i, arr[i]);
    }
}
int func1(int *ptr)//array as parameter by pointer
{
    for (int i = 0; i <= 4; i++)
    {
        printf("the value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 45;//change the value of a[3] 
    printf("the value at %d is %d\n",*ptr , *(ptr + 2));
}
int main()
{
    int a[] = {1, 23, 5, 6, 33};// also int a[5]
    printf("the value at index 0 is %d\n", a[0]);
    func(a);
    printf("the value at index 0 is %d\n", a[0]);
    func1(a);
   
}
    