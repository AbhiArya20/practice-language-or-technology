#include <stdio.h>
int main()
{
    int a = 5;
    int *pointer = &a;//pointer declaration and initialization which store address of a.
    printf("the value of a is %d\n", a);
    printf("the value of a is %d\n", *pointer);
    printf("the address of a is %d\n", pointer);
    printf("the address of pointer is %d\n", &pointer);
    printf("the value of pointer is %d\n", *(&pointer));

    //array pointer
    int arr[5] = {5, 3, 6, 23, 3};

    printf("the value of arr is %d\n", *(&arr[0]));
    printf("the value of arr is %d\n", *(&arr[1]));
    printf("the value of arr is %d\n", *arr);           //a[0]
    printf("the value of arr is %d\n", *(arr + 1));     //a[1]

    
    printf("the addresss of arr is %d\n", (&arr[0]));
    printf("the addresss of arr is %d\n", (&arr[1]));
    printf("the addresss of arr is %d\n", (arr));
    printf("the addresss of arr is %d\n", (arr + 1));
    
}

// pointer to pointer is allowed without limit