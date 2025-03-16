#include<stdio.h>
int main()
{
    int a;
    printf("enter an integer\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You enter %d as case", a);
        break;
    case 2:
        printf("You enter %d as case", a);
        break;
    case 3:
        printf("You enter %d as case", a);
        break;
    case 4:
        printf("You enter %d as case", a);
        break;
    case 5:
        printf("You enter %d as case",a);
        break;
    case 6:
        printf("You enter %d as case", a);
        break;
    
    default:
    printf("you have type greater than 6");
        break;
    }
}