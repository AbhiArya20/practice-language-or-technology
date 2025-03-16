#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include "first.c"
int main()
{

    int id;
    char *ptr;
    printf("enter the size of your ID\n");
    scanf("%d\n", &id);

    ptr = (char *)malloc((id + 1) * sizeof(char));
    getchar();
    printf("enter your id\n");
    scanf("%d", &ptr);
    printf("your ID is %s\n", ptr);
    free(ptr);
}