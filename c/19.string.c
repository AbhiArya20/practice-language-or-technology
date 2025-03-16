#include <stdio.h>
int main()
{
    char std[34];
    char str[] = "Abhishek";//  \0 automatic and can't change  
    char str1[] = {'A', 'b', 'h', 'i', 's', 'h', 'e', 'k', '\0'};
    printf("%s\n%s\n", str, str1);
    printf("Enter a string that you want to print\n");
    gets(std);//to take complete string scanftake only first word;
    puts(std);//same as printf
}

//char *str="Abhishek";   declaration by pointer , can change
//print("%s",str);