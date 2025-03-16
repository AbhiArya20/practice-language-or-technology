#include <stdio.h>
#include <string.h>

void reverse(char *str, int l,int k)
{
    if (l>=k)
        return;
    char temp= *(str+l);
    *(str+l)=*(str+k);
    *(str+k) = temp;
    reverse(str, ++l,--k);
   
}

int main()
{

    char str[100];
    gets(str);
    reverse(str, 0,strlen(str)-1);

    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c",str[i]);
    }
    
}